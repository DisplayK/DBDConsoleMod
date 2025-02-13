#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Templates/SubclassOf.h"
#include "EOfferingEffectType.h"
#include "ForceSpawnTileData.h"
#include "EDisconnectErrors.h"
#include "PlayerDisconnectDelegate.h"
#include "ParadiseData.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDGameInstance.generated.h"

class UDBDAuthentication;
class UCharacterXPManager;
class UDBDDesignTunables;
class USpecialEventManager;
class UDataAsset;
class UShopManager;
class UDBDEasyAntiCheat;
class UContentScheduleManager;
class UWalletHandler;
class UOnlineTransactionServiceComponent;
class UControllerPairingManager;
class UPlayerProfileDAL;
class UOfferingEffectCollection;
class UFriendManager;
class UDateTimerUpdater;
class UChunkingManager;
class UOnlineSystemHandler;
class UDBDPlayerLevelManager;
class UOfferingHandler;
class URegionFinder;
class UDBDSocialNotificationFactory;
class UCinematicManager;
class AActor;
class AOfferingSequenceManager;
class UGameEventTracker;
class UPlayerNameRegistration;
class UDBDKeyDisplayInfo;
class UDecalSpawnerCollection;
class UNewsContentManager;
class UCharacterProgressionManager;
class APlayerController;
class UDedicatedServerManager;
class UPrimitiveCollection;
class UBloodwebManager;
class UDBDTimeTravelManager;
class UCDNPatchManager;
class ADBDPlayerState;
class UAtlantaRitualsManager;
class UBonusPointEventsManager;
class ADBDPlayer;
class UDBDHud;
class UActorKnowledgeCollection;
class UFearMarketManager;
class UAssetLibraryManager;
class UPopupFactory;
class UInventoryHandler;
class ULocalEventManager;
class USoftBanManager;
class USharedAuthenticationComponent;
class UObject;
class UDBDPersistentData;
class UDBDPartyFacade;
class UPlayerDataStorageFacade;
class UAtlantaTooltipManager;
class URankManager;
class UInteractionProficiency;
class UToastManager;
class UPenaltyTracker;
class UPopupSequencer;
class ULightingHelper;
class UConsentManager;
class UMapActorDB;
class UPlayerReportManager;
class UDBDTimeUtilities;
class ULocalPlayer;
class ULightingInterpolator;
class ABaseSky;
class ACamperPlayer;
class ASlasherPlayer;
class UWorld;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UDBDGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UDBDDesignTunables> DesignTunableClass;

	UPROPERTY(BlueprintReadOnly, Transient)
	UDBDDesignTunables* DesignTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<URegionFinder> RegionClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UShopManager> ShopManagerClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AOfferingSequenceManager> OfferingSequenceManagerClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UFriendManager> FriendManagerClass;

	UPROPERTY(EditAnywhere)
	UDataAsset* AchievementsDataAsset;

	UPROPERTY(BlueprintReadWrite, Transient)
	UGameEventTracker* GameEventTracker;

	UPROPERTY()
	UDBDKeyDisplayInfo* KeyDisplayInfo;

	UPROPERTY()
	bool LeaveGameRequested;

	UPROPERTY(Transient)
	UPlayerProfileDAL* PlayerProfileDAL;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 GenerationSeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString PaperTileAssetName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 GenerationPlayerCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString PremadeMap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FForceSpawnTileData> ForceSpawnTileData;

	UPROPERTY(BlueprintReadWrite, Transient)
	AOfferingSequenceManager* OfferingSequence;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FParadiseData> ParadiseData;

	UPROPERTY(Transient)
	bool PlayerProfileLoadFailed;

	UPROPERTY(Transient)
	UNewsContentManager* NewsContentManager;

	UPROPERTY(Transient)
	UContentScheduleManager* ContentScheduleManager;

	UPROPERTY(Transient)
	UCDNPatchManager* CDNPatchManager;

	UPROPERTY(Transient)
	UCharacterProgressionManager* CharacterProgressionManager;

	UPROPERTY(Transient)
	UCharacterXPManager* CharacterXPManager;

	UPROPERTY(Transient)
	UAtlantaRitualsManager* AtlRitualsManager;

	UPROPERTY(Transient)
	FString AuthOrEACErrorAdditionalInfo;

	UPROPERTY(Transient)
	bool HasServerLeftMatch;

	UPROPERTY(Transient)
	bool HasWrittenGameEndStats;

	UPROPERTY(Transient)
	UFearMarketManager* FearMarketManager;

	UPROPERTY(Transient)
	UShopManager* ShopManager;

	UPROPERTY(Transient)
	UFriendManager* FriendManager;

	UPROPERTY(Transient)
	UWalletHandler* WalletHandler;

	UPROPERTY(Transient)
	FName TutorialRequesterName;

	UPROPERTY(Transient)
	UControllerPairingManager* ControllerPairingManager;

	UPROPERTY(Transient)
	UChunkingManager* ChunkingManager;

	UPROPERTY(EditAnywhere, BlueprintAssignable)
	FPlayerDisconnectDelegate OnPlayerDisconnect;

private:
	UPROPERTY(Transient)
	UAssetLibraryManager* _assetLibraryManager;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UBloodwebManager> _bloodwebManagerClass;

	UPROPERTY(Transient, Export)
	UOnlineTransactionServiceComponent* _onlineTransactionService;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<USharedAuthenticationComponent> _sharedAuthenticationManagerClass;

	UPROPERTY(Transient)
	UDBDPersistentData* _persistentData;

	UPROPERTY(Transient)
	UPlayerDataStorageFacade* _playerDataFacade;

	UPROPERTY(Transient)
	URankManager* _rankManager;

	UPROPERTY(Transient)
	UDBDPlayerLevelManager* _playerLevelManager;

	UPROPERTY(Transient)
	UPlayerNameRegistration* _playerNameRegistration;

	UPROPERTY(Transient)
	USpecialEventManager* _specialEventManager;

	UPROPERTY(Transient)
	UBonusPointEventsManager* _bonusPointEventsManager;

	UPROPERTY(Transient)
	UDBDTimeTravelManager* _timeTravelManager;

	UPROPERTY(Transient)
	UToastManager* _toastManager;

	UPROPERTY(Transient)
	UDBDSocialNotificationFactory* _socialNotificationFactory;

	UPROPERTY(Transient)
	UDBDPartyFacade* _partyFacade;

	UPROPERTY(Transient)
	UPenaltyTracker* _penaltyTracker;

	UPROPERTY(Transient)
	ULightingHelper* _ligthingHelper;

	UPROPERTY(Transient)
	UOfferingHandler* _offeringHandler;

	UPROPERTY(Transient, Export)
	TArray<UActorKnowledgeCollection*> _actorKnowledgeCollections;

	UPROPERTY(Transient)
	UMapActorDB* _mapActorDB;

	UPROPERTY(Transient)
	TArray<UInteractionProficiency*> _interactionProficiencies;

	UPROPERTY(Transient)
	UDBDHud* _theHud;

	UPROPERTY(Transient)
	UBloodwebManager* BloodwebManager;

	UPROPERTY(Transient)
	USharedAuthenticationComponent* _sharedAuthenticationManager;

	UPROPERTY(Transient)
	UPopupSequencer* _popupSequencer;

	UPROPERTY(Transient)
	UPopupFactory* _popupFactory;

	UPROPERTY(Transient)
	UDBDAuthentication* _auth;

	UPROPERTY(Transient)
	UDBDEasyAntiCheat* _eac;

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<UObject>> _execObjects;

	UPROPERTY(Transient)
	bool _networkFailureDetected;

	UPROPERTY(Transient)
	bool _networkConnectionMonitoringOnly;

	UPROPERTY(Transient)
	bool _achievementStatsUploadEnabled;

	UPROPERTY(Transient)
	bool _isDisconnected;

	UPROPERTY(Transient)
	bool _isGamepadReconnected;

	UPROPERTY(Transient)
	bool _isProfileOffline;

	UPROPERTY(Transient)
	bool _isAppSuspended;

	UPROPERTY(Transient)
	bool _isAppResumed;

	UPROPERTY(Transient)
	bool _isInvitationRejected;

	UPROPERTY(Transient)
	bool _isAdditionalContentInstalled;

	UPROPERTY(Transient)
	bool _isCloudInventoryInitialized;

	UPROPERTY(Transient)
	UOfferingEffectCollection* _resultOfferingAndPerkEffects;

	UPROPERTY(Transient)
	UInventoryHandler* _inventoryHandler;

	UPROPERTY(Transient)
	ULocalEventManager* _localEventManager;

	UPROPERTY(Transient)
	UPlayerReportManager* _playerReportManager;

	UPROPERTY(Transient)
	UCinematicManager* _cinematicManager;

	UPROPERTY(Transient)
	USoftBanManager* _softBanManager;

	UPROPERTY(Transient)
	UConsentManager* _consentManager;

	UPROPERTY(Transient)
	UOnlineSystemHandler* _onlineSystemHandler;

	UPROPERTY(Transient)
	URegionFinder* _regionFinder;

	UPROPERTY(Transient)
	UDecalSpawnerCollection* _decalSpawnerCollection;

	UPROPERTY(Transient)
	UPrimitiveCollection* _characterClippingPrimitiveCollection;

	UPROPERTY(Transient)
	UAtlantaTooltipManager* _atlantaTooltipManager;

	UPROPERTY(Transient)
	uint32 LastProviderErrorCode;

	UPROPERTY(Transient)
	EDisconnectErrors _disconnectError;

	UPROPERTY(Transient)
	UDateTimerUpdater* _dateTimerUpdater;

public:
	UFUNCTION()
	void StartOfferingSequence();

	UFUNCTION(BlueprintCallable)
	void SimulateOfferingSequence(const TArray<FName>& offerings, bool playSequence);

	UFUNCTION(BlueprintCallable)
	void RemoveActorKnowledgeCollection(UActorKnowledgeCollection* collection);

	UFUNCTION()
	void OnTimeTravelComplete(bool success, const FString& date) const;

	UFUNCTION(BlueprintPure)
	bool IsActorKnown(const ADBDPlayer* knowledgePossessor, AActor* possiblyKnownActor) const;

	UFUNCTION(BlueprintPure)
	bool HasOfferingOfType(EOfferingEffectType type, int32 playerId, FName tag) const;

	UFUNCTION(BlueprintPure)
	bool HasOfferingByType(EOfferingEffectType type) const;

	UFUNCTION(BlueprintCallable, Exec)
	void GotoSplashScreen(bool showDefaultDialogueOnSplashScreen);

	UFUNCTION()
	UDBDTimeUtilities* GetTimeUtils() const;

	UFUNCTION(BlueprintPure)
	USpecialEventManager* GetSpecialEventManager() const;

	UFUNCTION(BlueprintPure)
	USoftBanManager* GetSoftBanManager() const;

	UFUNCTION(BlueprintPure)
	URankManager* GetRankManager() const;

	UFUNCTION(BlueprintPure)
	UPlayerNameRegistration* GetPlayerNameRegistration() const;

	UFUNCTION(BlueprintPure)
	UDBDPlayerLevelManager* GetPlayerLevelManager() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxSurvivorCount() const;

	UFUNCTION(BlueprintPure)
	UMapActorDB* GetMapActorDB() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayerState* GetLocalPlayerState() const;

	UFUNCTION(BlueprintPure)
	APlayerController* GetLocalPlayerController() const;

	UFUNCTION(BlueprintPure)
	ULocalPlayer* GetLocalPlayer() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetLocallyControlledCharacter() const;

	UFUNCTION()
	ULocalEventManager* GetLocalEventManager() const;

	UFUNCTION(BlueprintPure)
	ULightingInterpolator* GetLightInterpolator();

	UFUNCTION(BlueprintPure)
	ULightingHelper* GetLightingHelper();

	UFUNCTION(BlueprintPure)
	ABaseSky* GetLevelLighting();

	UFUNCTION(BlueprintPure)
	UInventoryHandler* GetInventoryHandler() const;

	UFUNCTION(BlueprintPure)
	TArray<ACamperPlayer*> GetInGameSurvivors() const;

	UFUNCTION(BlueprintPure)
	TArray<ADBDPlayer*> GetInGamePlayers() const;

	UFUNCTION(BlueprintPure)
	TArray<ASlasherPlayer*> GetInGameKillers() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetInGameKiller() const;

	UFUNCTION(BlueprintPure)
	void GetInGameAliveSurvivors(TArray<ACamperPlayer*>& outPlayingSurvivors) const;

	UFUNCTION()
	UDedicatedServerManager* GetDedicatedServerManager() const;

	UFUNCTION(BlueprintPure)
	UDecalSpawnerCollection* GetDecalSpawnerCollection() const;

	UFUNCTION(BlueprintPure)
	int32 GetDeadOrDisconnectedCampersCount(ADBDPlayerState* exception) const;

	UFUNCTION(BlueprintPure)
	UConsentManager* GetConsentManager() const;

	UFUNCTION(BlueprintPure)
	UCinematicManager* GetCinematicManager() const;

	UFUNCTION(BlueprintPure)
	FName GetCharacterDefaultItem(int32 inCharacterIndex);

	UFUNCTION(BlueprintPure)
	UPrimitiveCollection* GetCharacterClippingPrimitiveCollection() const;

	UFUNCTION(BlueprintPure)
	UBonusPointEventsManager* GetBonusPointEventsManager() const;

	UFUNCTION()
	static void ForceCloseGame();

	UFUNCTION()
	void EndLoadingScreen(UWorld* loadedWorld);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_UpdateSteamInventory();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ToggleLightingLoaded();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TestTickedDiceRoll(float BaseProbability, float ticks, float MultiplicativeModifier, float AdditiveModifier);

	UFUNCTION(Exec)
	void DBD_TestSaveFile(const FString& name);

	UFUNCTION(Exec)
	void DBD_TestRegion();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TestDiceRoll(float BaseProbability, float MultiplicativeModifier, float AdditiveModifier);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetStatsUploadEnabled(bool enabled);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetFearMarketDate(const FString& dateString);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ResetSaveData();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ResetCurrentAchievementStats(bool andUpload, bool andUpdateData);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ResetCurrentAchievementStat(FName statName, bool andUpload);

	UFUNCTION(BlueprintPure=false, BlueprintCallable, Exec)
	void DBD_PrintAudioConfig() const;

	UFUNCTION(Exec)
	void DBD_PIXEndCapture();

	UFUNCTION(Exec)
	void DBD_PIXBeginCapture();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_LogBloodWebDefinition();

	UFUNCTION(Exec)
	void DBD_GetRegion();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_GenerateBloodWeb(int32 level);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ForceSave();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ForceLoad();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DumpSessions();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DisplayCurrentAchievementStat(FName statName);

	UFUNCTION(Exec)
	void DBD_DestroySteamInventory();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DeleteLocalSaveFile();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_CheckForNewContent(const FString& debugGameVersion, bool forceDisplay);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ChangeSteamOverlayPosition(int32 position, int32 verticalOffset, int32 horizontalOffset);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ApplyNoMist();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ApplyMist(const float fogModifier);

	UFUNCTION(BlueprintCallable)
	void BeginLoadingScreen(const FString& MapName);

	UFUNCTION(BlueprintCallable)
	void Authority_SimulatePerks(TArray<FName> perks, int32 level);

	UFUNCTION()
	void Async_GenerateBloodWebForCurrentCharacter();

	UFUNCTION(BlueprintCallable)
	void AddActorKnowledgeCollection(UActorKnowledgeCollection* collection);

public:
	UDBDGameInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDBDGameInstance) { return 0; }
