#pragma once

#include "CoreMinimal.h"
#include "LevelReadyToPlayEvent.h"
#include "ObsessionChangedDynamicDelegate.h"
#include "AllPlayerLoadedEvent.h"
#include "GameflowEventsNotifier.h"
#include "OnSlasherSetDelegate.h"
#include "GameFramework/GameState.h"
#include "OnKillerIntroCompletePercentChanged.h"
#include "EIntroState.h"
#include "EscapeDoorActivatedEvent.h"
#include "OfferingData.h"
#include "BuiltLevelData.h"
#include "LightingGeneratedEvent.h"
#include "SlasherSetEvent.h"
#include "ActivatedGeneratorCountChangedDynamicEvent.h"
#include "Dependency.h"
#include "EServerUseNetAsyncLoading.h"
#include "UObject/NoExportTypes.h"
#include "GamePresetData.h"
#include "UObject/SoftObjectPtr.h"
#include "EEndGameReason.h"
#include "EGameState.h"
#include "SelectedOffering.h"
#include "DBDGameState.generated.h"

class UInGameAssetPreloaderComponent;
class ADBDPlayerState_Menu;
class UServerTimeProviderComponent;
class USpecialEventGameplaySpawnerComponent;
class UCharacterCollection;
class ASlasherPlayer;
class ADBDPlayer;
class AMeatHook;
class URenderingFeaturesSequencer;
class AClipManager;
class ASearchable;
class AGenerator;
class ACamperPlayer;
class ATotem;
class AEscapeDoor;
class ABreakableBase;
class AHatch;
class UActorPairQueryEvaluatorComponent;
class AReverseBearTrapRemover;
class APallet;
class ABaseTrap;
class AWindow;
class ALocker;
class UAkAudioBank;
class AInteractable;
class UObject;
class UEndGameStateComponent;
class UScourgeHookManagerComponent;
class UCollectableCollection;
class APawn;
class ADBDPlayerState;

UCLASS()
class DEADBYDAYLIGHT_API ADBDGameState : public AGameState, public IGameflowEventsNotifier
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlasherSetMultiDelegate, ASlasherPlayer*, SlasherPlayer);

	DECLARE_DYNAMIC_DELEGATE(FOnLevelReadyToPlayDelegate);

	DECLARE_DYNAMIC_DELEGATE(FOnIntroCompleteDelegate);

public:
	UPROPERTY(BlueprintAssignable)
    FLevelReadyToPlayEvent OnLevelReadyToPlay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	FEscapeDoorActivatedEvent OnEscapeDoorActivated;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	EIntroState IntroState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FOnKillerIntroCompletePercentChanged OnKillerIntroCompletePercentChanged;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FLightingGeneratedEvent OnLightingGenerated;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Export)
	USpecialEventGameplaySpawnerComponent* _specialEventGameplaySpawnerComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FAllPlayerLoadedEvent AuthorityOnAllPlayerLoaded;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FActivatedGeneratorCountChangedDynamicEvent OnActivatedGeneratorCountChangedDynamic;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSlasherSetEvent OnSlasherSet;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FObsessionChangedDynamicDelegate OnObsessionChanged;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	int32 CamperDeadCount;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	int32 CamperInMeatLockerCount;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	int32 CamperEscaped;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	int32 WaitingForEscape;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	int32 CamperCount;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool LeaveSpectateRequested;

	UPROPERTY(ReplicatedUsing=OnRep_SecondsLeftInLobby, Transient, BlueprintReadWrite, EditAnywhere)
	int32 SecondsLeftInLobby;

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	ASlasherPlayer* Slasher;

	UPROPERTY(Transient)
	URenderingFeaturesSequencer* _renderingSequencer;

public:
	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	int32 _camperHookedInBasementCount;

	UPROPERTY(ReplicatedUsing=OnRep_UseNetAsyncLoading, Transient, BlueprintReadWrite, EditAnywhere)
	EServerUseNetAsyncLoading _useNetAsyncLoading;

	UPROPERTY(ReplicatedUsing=OnRep_GameLevelLoadingStarted, Transient, BlueprintReadWrite, EditAnywhere)
	bool _gameLevelLoadingStarted;

	UPROPERTY(ReplicatedUsing=OnRep_BuildLevelData, Transient, BlueprintReadWrite, EditAnywhere)
	FBuiltLevelData _builtLevelData;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	FOfferingData _levelOfferings;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	AClipManager* _clipManager;

	UPROPERTY(ReplicatedUsing=OnRep_SessionId, Transient, BlueprintReadWrite, EditAnywhere)
	FGuid _sessionId;

	UPROPERTY(ReplicatedUsing=OnRep_LobbyId, Transient, BlueprintReadWrite, EditAnywhere)
	FGuid _lobbyId;

	UPROPERTY(ReplicatedUsing=OnRep_ActivatedGeneratorCount, Transient, BlueprintReadWrite, EditAnywhere)
	int32 _activatedGeneratorCount;

	UPROPERTY(ReplicatedUsing=OnRep_RequiredActivatedGeneratorCount, Transient, BlueprintReadWrite, EditAnywhere)
	int32 _requiredActivatedGeneratorCount;

	UPROPERTY(ReplicatedUsing=OnRep_EscapeDoorActivated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _escapeDoorActivated;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _escapeDoorOpened;

	UPROPERTY(ReplicatedUsing=OnRep_HatchOpened, Transient, BlueprintReadWrite, EditAnywhere)
	bool _isHatchOpen;

	UPROPERTY(ReplicatedUsing=OnRep_OnLevelReadyToPlay, Transient, BlueprintReadWrite, EditAnywhere)
	bool _levelReadyToPlay;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _playerDistributionReady;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _usingWeakenedMechanic;

	UPROPERTY(ReplicatedUsing=OnRep_SurvivorLeft, Transient, BlueprintReadWrite, EditAnywhere)
	int32 _survivorLeft;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<AMeatHook*> _meatHooks;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<ASearchable*> _searchables;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<AGenerator*> _generators;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<AEscapeDoor*> _escapeDoors;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<AHatch*> _hatches;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<AReverseBearTrapRemover*> _reverseBearTrapRemovers;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<ABaseTrap*> _baseTraps;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<APallet*> _pallets;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<AWindow*> _windows;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<ALocker*> _lockers;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<ABreakableBase*> _breakableWalls;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<ATotem*> _totems;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	FBoxSphereBounds _mapBoxSphereBounds;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 _camperEscapedThroughHatch;

	UPROPERTY(ReplicatedUsing=OnRep_ObsessionTarget, Transient, BlueprintReadWrite, EditAnywhere)
	ACamperPlayer* _obsessionTarget;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	bool _cachedObsessionEscaped;

	UPROPERTY(Replicated, Transient, EditAnywhere)
	int8 _numberOfSurvivorKilled;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<AInteractable*> _traps;

	UPROPERTY(ReplicatedUsing=OnRep_GamePresetData, Transient, BlueprintReadWrite, EditAnywhere)
	FGamePresetData _gamePresetData;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	bool _gameLevelLoaded;

	UPROPERTY(ReplicatedUsing=OnRep_OnGameLevelCreated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _gameLevelCreated;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	bool _gameLevelEnded;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	bool _gameTimedOut;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	EEndGameReason _gameEndedReason;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	bool _isLoadoutFrozen;

	UPROPERTY(Export, BlueprintReadWrite, EditAnywhere)
	UEndGameStateComponent* _endGameState;

	UPROPERTY(Transient, Export, BlueprintReadWrite, EditAnywhere)
	UScourgeHookManagerComponent* _scourgeHookManager;

	UPROPERTY(Export, BlueprintReadWrite, EditAnywhere)
	UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent;

	UPROPERTY(Export, BlueprintReadWrite, EditAnywhere)
	UCharacterCollection* _characterCollection;

	UPROPERTY(Export, BlueprintReadWrite, EditAnywhere)
	UCollectableCollection* _collectableCollection;

	UPROPERTY(Export, BlueprintReadWrite, EditAnywhere)
	UServerTimeProviderComponent* _serverTimeProvider;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
	UInGameAssetPreloaderComponent* _inGameAssetPreloaderComponent;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	FDateTime _matchStartTime;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	bool _isServerDedicated;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	int32 _maxSurvivorCount;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	FString _serverBuildVersion;

	UPROPERTY(Replicated, Transient, BlueprintReadWrite, EditAnywhere)
	FString _serverContentVersion;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _introDuration;

public:
	UFUNCTION(BlueprintCallable)
	void UnregisterFromIntroCompleteAndLevelReadyToPlay(const UObject* inObject);

	UFUNCTION(BlueprintCallable)
	void SortOfferings();

	UFUNCTION(BlueprintCallable)
	void SetPlayersReadyToStart(bool playersReadyToStart);

	UFUNCTION(BlueprintCallable)
	void SetKillerIntroCompletedNormalized(float completedAmount);

	UFUNCTION(BlueprintCallable)
	void SetGameLevelEnded(EEndGameReason endGameReason);

	UFUNCTION(BlueprintCallable)
	void SetDisplayMapName(bool display);

	UFUNCTION(BlueprintCallable)
	void SetBuiltLevelData(const FName& themeName, const FName& themeWeather, const FName& audioStateThemes, const FName& audioStateWeather, const FName& audioThemeEvent, const FName& audioLimitPointEvent, const TSoftObjectPtr<UAkAudioBank>& audioThemeSoundBank, const FString& mapName, int32 tileCount, const TArray<FDependency>& levelDependencies, const FName& specialEventId);

	UFUNCTION(BlueprintCallable)
	void Server_UpdateGameRole();

	UFUNCTION(BlueprintCallable)
	void ResetGameLevelStatus();

	UFUNCTION(BlueprintCallable)
	void RemoveTrap(AInteractable* toRemove);

public:
	UFUNCTION(BlueprintCallable)
	void OnRep_UseNetAsyncLoading();

	UFUNCTION(BlueprintCallable)
	void OnRep_SurvivorLeft(int32 oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_SessionId();

	UFUNCTION(BlueprintCallable)
	void OnRep_SecondsLeftInLobby(const int32 oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_RequiredActivatedGeneratorCount(int32 oldRequiredActivatedGeneratorCount);

	UFUNCTION(BlueprintCallable)
	void OnRep_OnLevelReadyToPlay(bool oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_OnGameLevelCreated();

	UFUNCTION(BlueprintCallable)
	void OnRep_ObsessionTarget(ACamperPlayer* previousObsessionTarget);

	UFUNCTION(BlueprintCallable)
	void OnRep_LobbyId();

	UFUNCTION(BlueprintCallable)
	void OnRep_HatchOpened(bool oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_GamePresetData();

	UFUNCTION(BlueprintCallable)
	void OnRep_GameLevelLoadingStarted(bool oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_EscapeDoorActivated(bool oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_BuildLevelData();

	UFUNCTION(BlueprintCallable)
	void OnRep_ActivatedGeneratorCount(int32 oldValue);

	UFUNCTION(BlueprintCallable)
	void OnPlayerGameStateChangedAddIfKilled(ADBDPlayerState* playerState, EGameState gameState);

public:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_UpdateCharacterFromGamePreset(ADBDPlayerState_Menu* playerState_Menu, const FGamePresetData& gamePresetData);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetServerLeftGame(bool hasServerLeftGame);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetLostServerConnection(bool hasLostServerConnection);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetGameLevelLoaded(bool gameLevelLoaded);

public:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetGameLevelEnded(EEndGameReason endGameReason);

public:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetGameEnded(bool hasServerLeftGame);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetBuiltLevelData(const FName& themeName, const FName& themeWeather, const FName& audioStateThemes, const FName& audioStateWeather, const FName& audioThemeEvent, const FName& audioLimitPointEvent, const TSoftObjectPtr<UAkAudioBank>& audioThemeSoundBank, const FString& mapName, int32 tileCount, const TArray<FDependency>& levelDependencies, const FName& specialEventId);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SendHVSPlusState(bool enabled);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SendEnsureToClients(const FString& ensure);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_OnGameStarted();

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_BroadcastOnLevelLoadingTimeOutClientEvent();

	UFUNCTION(BlueprintPure)
	bool IsPlayerDistributionReady() const;

	UFUNCTION(BlueprintPure)
	bool IsOnePlayerLeft() const;

	UFUNCTION(BlueprintCallable)
	bool IsOfferingReceived() const;

	UFUNCTION(BlueprintCallable)
	bool IsObsessionTargetAliveInLevel();

	UFUNCTION(BlueprintCallable)
	bool IsObsessionTargetAlive();

	UFUNCTION(BlueprintPure)
	bool IsLightingGenerated() const;

	UFUNCTION(BlueprintCallable)
	bool IsLevelSetupDone() const;

	UFUNCTION(BlueprintPure)
	bool IsLevelReadyToPlay() const;

	UFUNCTION(BlueprintPure)
	bool IsIntroCompleted() const;

	UFUNCTION(BlueprintPure)
	bool IsHatchVisible() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeRequirementCompleted() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeDoorOpen() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeDoorActivated() const;

	UFUNCTION(BlueprintCallable)
	void IntroCompleted();

	UFUNCTION(BlueprintPure)
	TArray<AInteractable*> GetTraps() const;

	UFUNCTION(BlueprintPure)
	TArray<ATotem*> GetTotems() const;

	UFUNCTION(BlueprintPure)
	int32 GetSurvivorLeft() const;

	UFUNCTION(BlueprintPure)
	USpecialEventGameplaySpawnerComponent* GetSpecialEventGameplaySpawnerComponent() const;

	UFUNCTION(BlueprintCallable)
	TArray<FSelectedOffering> GetSelectedOfferings() const;

	UFUNCTION(BlueprintCallable)
	bool GetSelectedOffering(int32 index, FSelectedOffering& selectedOffering) const;

	UFUNCTION(BlueprintPure)
	int32 GetRequiredActivatedGeneratorCount() const;

	UFUNCTION(BlueprintPure)
	int32 GetRemainingGeneratorsNeeded() const;

	UFUNCTION(BlueprintCallable)
	ADBDPlayerState* GetPlayerStateByMirrorsID(const FString& id) const;

	UFUNCTION(BlueprintCallable)
	ADBDPlayerState* GetPlayerStateByIDString(const FString& id) const;

	UFUNCTION(BlueprintPure)
	bool GetPlayersReadyToStart() const;

	UFUNCTION(BlueprintPure)
	void GetPlayerRoleCounts(int32& survivorCount, int32& killerCount, int32& spectatorCount) const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetObsessionTarget() const;

	UFUNCTION(BlueprintPure)
	int32 GetNumberOfOtherActiveSurvivors(ADBDPlayer* exception) const;

	UFUNCTION(BlueprintPure)
	int32 GetNumberOfActiveSurvivors() const;

	UFUNCTION(BlueprintPure)
	FName GetMapThemeName() const;

	UFUNCTION(BlueprintCallable)
	ADBDPlayerState* GetLocalPlayerState() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetLocalPlayerPawn() const;

	UFUNCTION(BlueprintPure)
	APawn* GetLocalPlayerBasePawn() const;

	UFUNCTION(BlueprintCallable)
	TSoftObjectPtr<UAkAudioBank> GetLevelThemeAudioSoundBankAssetPtr() const;

	UFUNCTION(BlueprintCallable)
	FBuiltLevelData GetLevelData() const;

	UFUNCTION(BlueprintPure)
	float GetKillerIntroCompletedNormalized() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetKiller() const;

	UFUNCTION(BlueprintPure)
	bool GetIsGameEnded() const;

	UFUNCTION(BlueprintPure)
	TArray<AWindow*> GetInGameWindows() const;

	UFUNCTION(BlueprintPure)
	TArray<ASearchable*> GetInGameSearchables() const;

	UFUNCTION(BlueprintPure)
	TArray<AReverseBearTrapRemover*> GetInGameReverseBearTrapRemovers() const;

	UFUNCTION(BlueprintPure)
	TArray<APallet*> GetInGamePallets() const;

	UFUNCTION(BlueprintPure)
	TArray<AMeatHook*> GetInGameMeatHooks() const;

	UFUNCTION(BlueprintPure)
	TArray<AHatch*> GetInGameHatches() const;

	UFUNCTION(BlueprintPure)
	TArray<AGenerator*> GetInGameGenerators() const;

	UFUNCTION(BlueprintPure)
	TArray<AEscapeDoor*> GetInGameEscapeDoors() const;

	UFUNCTION(BlueprintPure)
	TArray<ABaseTrap*> GetInGameBaseTraps() const;

	UFUNCTION(BlueprintPure)
	bool GetGameLevelLoadingStarted() const;

	UFUNCTION(BlueprintPure)
	bool GetGameLevelLoaded() const;

	UFUNCTION(BlueprintPure)
	UEndGameStateComponent* GetEndGameStateComponent() const;

	UFUNCTION(BlueprintPure)
	UCollectableCollection* GetCollectableCollection() const;

	UFUNCTION(BlueprintPure)
	UCharacterCollection* GetCharacterCollection() const;

	UFUNCTION(BlueprintCallable)
	void CallOnSlasherSet(FOnSlasherSetDelegate callback);

	UFUNCTION(BlueprintCallable)
	void CallOnLevelReadyToPlay(FOnLevelReadyToPlayDelegate callback);

	UFUNCTION(BlueprintCallable)
	void CallOnIntroComplete(FOnIntroCompleteDelegate callback);

	UFUNCTION(BlueprintCallable)
	void BroadcastOnSetBuildLevelData();

	UFUNCTION(BlueprintCallable)
	void Authority_SignalEscapeDoorActivated(bool newEscapeDoorActivated);

	UFUNCTION(BlueprintCallable)
	void Authority_SetSurvivorLeft(int32 survivorRemaining);

	UFUNCTION(BlueprintCallable)
	void Authority_SetLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_SetHatchOpen(bool opened);

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameStarted();

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameSelectedOffering(const TArray<FSelectedOffering>& offerings);

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameLevelLoaded();

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameLevelEnded(EEndGameReason endGameReason);

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameLevelCreated();

	UFUNCTION(BlueprintCallable)
	void Authority_SetEscapeDoorOpened(bool opened);

	UFUNCTION(BlueprintCallable)
	void Authority_SetAllPlayerLoaded();

	UFUNCTION(BlueprintCallable)
	void Authority_EvaluateObsessionTarget(ADBDPlayer* potentialTarget);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EscapeThroughHatch();

	UFUNCTION(BlueprintCallable)
	void Authority_EnableObsession();

	UFUNCTION(BlueprintCallable)
	void Authority_DeactivateAI();

	UFUNCTION(BlueprintCallable)
	void AddTrap(AInteractable* toAdd);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDGameState();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGameState) { return 0; }
