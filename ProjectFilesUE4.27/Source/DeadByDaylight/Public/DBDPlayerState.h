#pragma once

#include "CoreMinimal.h"
#include "StatusViewSource.h"
#include "EGameState.h"
#include "PlayerflowEventsNotifier.h"
#include "OnPlayerGameStateChanged.h"
#include "GameFramework/PlayerState.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "PlayerGameplayEventDelegate.h"
#include "AIFinishedPlayingEvent.h"
#include "GameEventData.h"
#include "EPlatformFlag.h"
#include "CharacterStateData.h"
#include "OnGameStateChanged.h"
#include "PlayerStateData.h"
#include "AwardedScores.h"
#include "AwardedScore.h"
#include "UserGameStats.h"
#include "OngoingScoreData.h"
#include "DBDRecentGameplayEvents.h"
#include "EquippedPlayerCustomization.h"
#include "EProviderFlag.h"
#include "StreamerModePlayerData.h"
#include "EDBDScoreTypes.h"
#include "ScoreEventData.h"
#include "GameplayTagContainer.h"
#include "EndOfMatchRPCData.h"
#include "DBDPlayerState.generated.h"

class AActor;
class UDedicatedServerHandlerComponent;
class UGameplayNotificationManager;
class UCharacterStatsHandlerComponent;
class UPlayerScoreComponent;

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerState : public APlayerState, public IPlayerflowEventsNotifier
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FAIFinishedPlayingEvent OnAIFinishedPlayingEvent;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	FString MirrorsId;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	FString ContentVersion;

	UPROPERTY(ReplicatedUsing=OnRep_BotDifficultyLevel, Transient, BlueprintReadWrite, EditAnywhere)
	EAIDifficultyLevel _difficultyLevel;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	bool IsPlayerReady;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	EPlayerRole GameRole;

	UPROPERTY(Transient, Export, BlueprintReadWrite, EditAnywhere)
	UDedicatedServerHandlerComponent* DedicatedServerHandler;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	FCharacterStateData CamperData;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, BlueprintReadWrite, EditAnywhere)
	FCharacterStateData SlasherData;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, BlueprintReadWrite, EditAnywhere)
	FPlayerStateData PlayerData;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FPlayerGameplayEventDelegate OnPlayerGameplayEvent;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnGameStateChanged OnGameStateChanged;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnPlayerGameStateChanged OnPlayerGameStateChanged;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName, FAwardedScores> _awardedScoresByType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FUserGameStats _cachedUserGameStats;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FOngoingScoreData> _ongoingScoreEvents;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FDBDRecentGameplayEvents _recentGameplayEvents;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _inParadise;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	bool _endOfMatchRpcReceived;

	UPROPERTY(ReplicatedUsing=OnRep_CustomizationData, BlueprintReadWrite, EditAnywhere)
	FEquippedPlayerCustomization _playerCustomization;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	int32 _selectedCamperIndex;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	int32 _selectedSlasherIndex;

public:
	UPROPERTY(Transient, Export, BlueprintReadWrite, EditAnywhere)
	UGameplayNotificationManager* _gameplayNotificationManager;

	UPROPERTY(Transient, Export, BlueprintReadWrite, EditAnywhere)
	UCharacterStatsHandlerComponent* _characterStatsHandler;

	UPROPERTY(Export, BlueprintReadWrite, EditAnywhere)
	UPlayerScoreComponent* _playerScoreComponent;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	FString _platformAccountId;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	EPlatformFlag _platform;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	EProviderFlag _provider;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	bool _crossplayAllowed;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	bool _offNetworkFlag;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient, BlueprintReadWrite, EditAnywhere)
	FStreamerModePlayerData _streamerModePlayerData;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _gameLevelLoaded;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _showPortraitBorder;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _hasActiveSubscription;

	UPROPERTY(Replicated, Transient, EditAnywhere)
	uint32 _matchmakingIncentive;

	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	float _pktLossPercentage;

protected:
	UFUNCTION()
	void UpdateOngoingScores();

public:
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_CheatSelectSurvivor(int32 camperIndex);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_CheatSelectKiller(int32 slasherIndex);

	UFUNCTION(BlueprintCallable)
	void OnRep_DisplayData();

	UFUNCTION(BlueprintCallable)
	void OnRep_CustomizationData();

	UFUNCTION(BlueprintCallable)
	void OnRep_BotDifficultyLevel();

private:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch);

protected:
	UFUNCTION(NetMulticast, Reliable, WithValidation, BlueprintCallable)
	void Multicast_SetInParadise();

public:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetAsLeftMatch();

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetAsDisconnected();

public:
	UFUNCTION(NetMulticast, Reliable, WithValidation, BlueprintCallable)
	void Multicast_FireGameplayEventWithScore(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, const FAwardedScore& awardedScore);

	UFUNCTION(NetMulticast, Reliable, WithValidation, BlueprintCallable)
	void Multicast_FireGameplayEvent(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target);

public:
	UFUNCTION(BlueprintPure)
	bool IsInFinishedPlayingState() const;

	UFUNCTION(BlueprintPure)
	bool HasHappened(EDBDScoreTypes gameplayEventType, float maxSecondsAgo) const;

	UFUNCTION(BlueprintCallable)
	bool HasEscaped() const;

	UFUNCTION(BlueprintPure)
	EGameState GetPlayerGameState() const;

	UFUNCTION(BlueprintPure)
	EPlayerRole GetGameRole() const;

	UFUNCTION(BlueprintPure)
	UGameplayNotificationManager* GetGameplayNotificationManager() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void FireScoreEvent(EDBDScoreTypes scoreType, float percentToAward);

	UFUNCTION(BlueprintCallable)
	void FireActiveStatusViewEvent(FName statusViewID, FName uniqueSourceID, const FStatusViewSource statusViewSource);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void FireActiveStatusEffectEvent(FName statusEffectID, float percentage, int32 iconFilePathIndex, int32 levelToDisplay);

public:
	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_UpdateWallet(const FString& currencyId, int32 amount);

	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_SetInParadise();

protected:
	UFUNCTION(Client, Reliable, WithValidation, BlueprintCallable)
	void Client_SetGameRole(EPlayerRole newRole);

public:
	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_RemoveItemFromInventory(FName toRemove, bool updateLoadout);

	UFUNCTION(Client, Reliable, WithValidation, BlueprintCallable)
	void Client_RemotelyDispatchGameEventWithScore(const FGameplayTag& gameEventType, const FGameEventData& gameEventData, const FAwardedScore& awardedScore);

	UFUNCTION(Client, Reliable, WithValidation, BlueprintCallable)
	void Client_RemotelyDispatchGameEvent(const FGameplayTag& gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_InvalidateIncentives();

	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_HandleEscapeScoreEvent();

public:
	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_HandleEndOfMatch(bool success, const FEndOfMatchRPCData& response);

	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_FetchCoreRituals(bool hasClaimableRitual);

public:
	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_AtlantaUpdateInventoryItem(const FName& itemid, int32 newCount);

public:
	UFUNCTION(BlueprintCallable)
	void ChangeStartingGameRole(EPlayerRole gameRoleNew);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ForceEndOngoingScoreEvent(EDBDScoreTypes scoreType);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayerState();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerState) { return 0; }
