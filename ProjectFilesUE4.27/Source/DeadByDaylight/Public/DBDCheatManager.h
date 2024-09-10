#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "Templates/SubclassOf.h"
#include "EControlMode.h"
#include "EEndGameReason.h"
#include "DBDCheatManager.generated.h"

class ADBDPlayer;
class ADBDMarketingCameraController;
class UVirtualKeyboard;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDCheatManager : public UCheatManager
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ADBDMarketingCameraController* DBDMarketingCameraControllerRef;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<ADBDMarketingCameraController> DBDMarketingCameraControllerClass;

private:
	UPROPERTY(Transient)
	UVirtualKeyboard* _virtualKeyboard;

public:
	UFUNCTION(Exec, BlueprintCallable)
	void DBD_WriteCurrentPositionTeleportCommandToClipboard();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_WakeUpSurvivor();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_VisualizeHookRenderRegions();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ValidateDatabases();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ValidateCustomizationItems(FName itemName);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_UsePrivateMatchMaking(const bool use);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_UploadAchievements();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_UnloadCharacterAssetLibrary(int32 characterId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_UnloadAllCharacterAssetLibrary();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_UnequipAllCharms();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_TryRequestToS3(const FString& bucket, const FString& internalUrl);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_TriggerEndGameScenario();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_TransitionToOnboarding();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ToggleProceduralDebugMode();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ToggleMarketingCamera();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ToggleHUDProfiling();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_TeleportWithClothHandling(float x, float y, float z);

	UFUNCTION(Exec)
	void DBD_TeleportToTile(uint32 x, uint32 y);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_TeleportToObject(const FString& objectId, int32 index, bool useNavMesh, bool ignoreCheck);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_TeleportAndSetControlRotation(float locationX, float locationY, float locationZ, float rotationPitch, float rotationYaw);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_Teleport(float x, float y, float z);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SyncLoadCharacter(int32 characterId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_StopVideoPlayer();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_StopLoadCharacterAssetLibrary(int32 characterId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_StartInjuredBleedout(float duration);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpectateSurvivor();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpectateKiller();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnStatusEffect(FName statusEffectID);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnPerk(FName perkID, int32 perkLevel);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnItemInMainMenu(FName itemId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnItemAddon(FName addonID);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnItem(FName itemID);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnDirectionMarker(float lifetime, float minVisibleDistance, float maxVisibleDistance);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnCharacter(int32 characterId, bool menuCharacter, FName outfitId, float x, float y, float z);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnCamperByName(const FString& name, int32 count, int32 disableAI);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SpawnCamperByIndex(int32 index, int32 count, int32 disableAI);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SnapTo(float x, float y, float z, float duration);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SimulateSynchronousFreeze(int32 miliseconds);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SimulateHack_SnapTo(float x, float y, float z, float duration);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowWebUrl(const FString& targetUrl);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowVirtualKeyboard(bool show, bool password);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowVirtualJoysticks();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowSubtitleString(const FString& subtitleString);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowSubtitleLocalized(const FString& subtitleLocKey);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowStoreUI(const FString& productId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowLoadout();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowKillerPowerDebugInfo(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowHelpConversation();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowHelpAndSupport();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowGameInstalledPrompt();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowErrorPopupAndGoBackToSplashScreen();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowErrorPopup();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowCharacterSightDebug(bool show) const;

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShowBoonTotemBlessingRange(const bool setVisible);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShopCameraQuit();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShopCameraMain();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ShopCameraBox();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetWindowDebugMode(bool debugMode);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetUserBloodpoints(int32 points);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetUseClientMovementPrediction(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetTotalXp(int32 totalXp);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetSurvivorLeftCount(int32 count);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetSurvivorEmblemPoints(const FString& emblemId, float points);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetStoreHitBoxesVisible(bool value);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetSingleDetectionZoneActive(bool active);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetServerCorrectionEnabled(const bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetRunVaultEnabled(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetReverseTraverseEnabled(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetRandomInputAmplitude(float amplitude);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetQATest();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetProceduralDebugMode(int32 mode);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetPlayerLevel(int32 currentXp, int32 playerLevel, int32 prestige);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetPips(const int32 survivorPips, const int32 killerPips, const FString& lastUpdateTime, const bool playedMatch);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetPerchRadiusThreshold(float threshold);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetOfferingTriggersVisibility(bool isVisible);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetObjectiveProgressionForNextGame(const FString& objectiveIdStr, const int32 progression);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetObjectiveProgression(const FString& objectiveIdStr, const int32 progression);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetNumTokensOnPerk(FName perkID, int32 numTokens);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetMouseLock(bool locked);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetMaxWalkSpeed(float maxWalkSpeed);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetKillerHeadVisibility(bool visible);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetKillerEmblemPoints(const FString& emblemId, float points);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetItemNormalizedEnergyLevel(float normalizedLevel);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetItemEnergyLevel(float level);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetInputAvailability(bool isInputEnable);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetHookDrainStage(const int32 hookDrainStage);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetHatchetVar(FName varName, float value);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetFriendFavoriteStatus(const FString& platformFriendId, bool favoriteStatus);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetFearMarketUpdateTimer(float updateInSeconds, bool repeatTimer);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetEthereal(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetDockedState(bool docked);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetDebugSnapPoint(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetDebugPrintAvailableInteractions(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetDebugInteractionScanInterval(float interval);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetDebugFailAllInteractions(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetDebugCarry(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetDate(const FString& dateString, bool isTicking);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetCustomizationMesh(FName itemName);

	UFUNCTION(Exec)
	void DBD_SetCustomizationCharm(FName charmId, int8 slotIndex);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetCrouch(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetContinuousPrintState(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetContinuousPrintDebug(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetChunkProgress(int32 chunkProgress);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetChunkingState(uint8 chunkState);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetCheatGameVersion(const int32 major, const int32 minor, const int32 patch);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetCharacterStat(FName statName, float amount);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAutoItemInteractEnabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAutoInteractEnabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAutoGesture1Enabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAutoFastInteractEnabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAutoAbilityInteractEnabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAuthoritativeMovement(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAllowNavigationInput(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAllowNavigation(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAIPlayerRankAll(int32 playerRank);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetAIPlayerRank(int32 playerRank);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SetActiveGeneratorCount(int32 count);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ServerToggleEdgeObjectDebugMode();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ServerEnableAntiCampingFeatureOnAllPlayers(bool enable);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SendInputToast(int32 buttonType);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SelectSpawner(int32 type);

	UFUNCTION(Exec)
	void DBD_SelectSlasher(uint32 slasherIndex);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SelectRandomObsession();

	UFUNCTION(Exec)
	void DBD_SelectCamper(uint32 camperIndex);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_SearchPlayerName(const FString& playerName) const;

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RevokeConsent(const FString& consentId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RevokeAllConsents();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ReverseBearTrap_ForceTimer(bool force);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ReverseBearTrap_FastForward(float deltaTime);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ReverseBearTrap_Execute();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RetrieveFriendsListFor(const FString& mirrorsId, const FString& platform);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResizeVideoToThumbnail(int32 sizeX, int32 sizeY, int32 positionX, int32 positionY);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResizeVideoToFullscreen();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResistentCamper();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetTutorialTips();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetSpecialEventSeenCinematics();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetSpecialEventEntryScreen(const FString& eventId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetSaveGame();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetPlayerLevelAndXp();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetPerkCooldowns();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetPallets();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetObjectiveProgression(const FString& objectiveIdStr);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetMeshRelativeOffSet();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetHookDrainStage();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetHasSeenLightSensitivity();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetGameVersion();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetFirstTimePlaying();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetCloth();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetCharacterStat(FName statName);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetCamera();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetBloodpoints();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ResetAllCharacterStats();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RequestServerEnsureLogs();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RequestSearchFriendPopup();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RequestEndGame();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemoveSomeStatusEffects();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemoveReverseBearTrap();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemovePerkTokens(int32 numberOfTokensToRemove);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemoveHP();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemoveFriend(const FString& platformId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemoveExhaustion();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemoveAllStatusEffects();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemoveAllPerks();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ReleaseControlMode();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RegisterPlayerName(const FString& name) const;

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RefreshStaticBlast();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RefillActivePhaseWalkCharges();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RedeemPromoCode(const FString& codeId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RebuildNavigationMesh();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_Ragdoll(FName rootBone, float blend);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_PutSurvivorToSleep();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_PulldownPallets();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ProcessOffering();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_PrivateMatchMakingName(const FString& name);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_PrintSteamBuildIds();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_PrintDate();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_PrintCurrentStateOnce();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_PlayMontage(FName montageID);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_PlayEntityTurn();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_OverrideVersionNumber(const FString& versionNumber);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_OpenVideo(const FString& videoId, const FString& mode, bool allowEngineTick);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_OpenNetworkErrorPopup();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_OpenLogFolder();

	UFUNCTION(BlueprintCallable, Exec, BlueprintCallable)
	void DBD_NoCrows();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_NewAuthToken();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_MuteMusicInGame(bool muted);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_Mute(bool mute);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_MoveBackAndForth(bool move, float moveDuration, bool run);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_MayThereBeOutlines(const FString& value, float red, float green, float blue);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_MarketingSetupGameplayCheats();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_MarketingSetupCinematicCheats();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_MarketingHideForCapture();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_LogGlobalUObjectArray();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_LogActivatables();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_LockHatchState(int32 state);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_LoadCharacterAssetLibrary(int32 characterId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_LoadCatalogDataFromS3();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListStatusEffects();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListPerks();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListItemAddons();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListInventory();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListInteractionInZone();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListDBStatusEffects();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListDBPerks();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListDBOfferings();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListDBItems();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListDBItemAddons();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListDBCustomizations();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListAvailableInteractions();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListAllStatusEffects();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListAllPerks();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ListAllItemAddons();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_LevelUp();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_LeaveMatch();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_KillLobby();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_Kill(bool sacrificed);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_IsServerDedicated();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_IsAssetLoaded(FName assetPath);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ImportLocalSaveGame();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_HookEscapeAutoSuccess(const bool success);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_HideSubtitles();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_HideRankPipsProgression(const bool hideRank);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_HideCharacter(bool isHidden);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_HideAllCharacters(bool isHidden);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_HealBots();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_GetSyncedUTCTime();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_GetSuggestedFriendsPerPlatform();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_GetRecentlyPlayedWithPlayers();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_GetPlayerPips();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_GetPlayerName() const;

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_GetPlayerLevel();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_GetKrakenID();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_GetChunkingState();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ForceSurvivorGreyedOut(bool isGreyedOut);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ForceSlasherToIgnoreLocalPlayer(bool activate);

	UFUNCTION(BlueprintCallable, Exec, BlueprintCallable)
	void DBD_ForceSkillChecks(bool enabled, ADBDPlayer* player);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ForceLocalPlayerChase(const bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ForceFlee(bool toward);

	UFUNCTION(BlueprintCallable, Exec, BlueprintCallable)
	void DBD_ForceDisableSkillChecks(bool enabled, ADBDPlayer* player);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ForceControlMode(EControlMode forcedControlMode);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_FlushPersistentDebugDrawings();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_FlushAnalytics();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_FindActorWithTag(const FString& tagname);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_FillHP();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ExportLocalSaveGame();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EquipCharmsIn3Slots(FName charmIdInSlot0, FName charmIdInSlot1, FName charmIdInSlot2);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EntitlementsInfo();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EnsureFail();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EndGameWithReason(EEndGameReason reason);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EndGame();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EndEndGameScenario();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EnableSpecialEvents(int32 enable);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EnableScaleformInputCapture(bool capture, bool lock);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EnableDebugUnavailableInteractions(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EnableCapsuleDynamicResize(bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EarnXpAmount(int32 matchXp);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_EarnPlayerXp(int32 matchTime, bool isFirstMatch, int32 consecutiveMatch, const FString& playerType, const FString& highestEmblemQuality, bool queueForTally);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DynamicCapsuleResizerAlwaysEnabled(const bool enabled);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DumpOnlineSessions();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DumpCharacterObjectStates();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DropSurvivorItems();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DownAllSurvivors();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayPopupToast(int32 toastId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayPlayerStat(FName statName);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayPlayerGameState();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayObjectiveProgression(const FString& objectiveIdStr);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayFriendsListData();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayFriendsList();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayFriendInfo(const FString& friendId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayEventProgression(const FString& eventId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayChunkingDefines();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisplayCharacterStat(FName statName);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DispatchOnPostItemAddonsCreation();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisconnectionPenaltyShow();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisconnectionPenaltySetEndOfBan(const FString& endOfBan);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisconnectionPenaltyAddPointsDS(const FString& userId, const FString& role, const FString& reason);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisconnectionPenaltyAddPoints(int32 amount);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DisableStartUpdateMontageDuringEnter(bool disable);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DestroyAllNotControlledCharacter();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DeleteRank();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DeleteAllCharacterAssetLibrary();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DebugPrintInteractionsInZone();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DebugPlague(bool enable);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DebugIsInterruptable(bool interruptable);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_DebugCompetence(int32 on);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CycleSpectate();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CyclePlayerSpawnPoints(int32 cycleDelay);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CrashGameWithStackOverflow();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CrashGameWithNullPtr();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CrashGameWithCheck();

	UFUNCTION(Exec)
	void DBD_ContextSystemRequestTransition(uint32 contextGroupUId, uint32 contextUId, int32 transitionId);

	UFUNCTION(Exec)
	void DBD_ContextSystemRequestEnd(uint32 contextGroupUId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ConsumeLevelPerk(const int32 characterLevelReached);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ConsumeBloodwebs(int32 initialLevel, int32 count);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CompleteEscapeRequirements();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ComeToMeSurvivors();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ComeToMeMyChildren();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CloseVideo();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CloseSystemPromptAndResetStack();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ClearPotentialReferencesToChunksNotYetDownloaded();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ClearInventory();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ClaimRetentionReward(const FString& calendarId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_CheckFail();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ChangeVideoVolume(float volume);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ChangeVideoPlaybackMode(const FString& mode);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ChangeVideoMedia(const FString& videoId, bool allowEngineTick);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ChangeBaseUrlForSpecificEndpointAndRequestType(const FString& endpoint, const FString& requestType, const FString& baseUrl);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_BuyBloodwebsLevel(int32 initialLevel, int32 count);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_BlessDullTotems();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_BackToIIS();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AT_TrialsLoop(const bool KillerOrSurvivor, const FString& CharacterId, const int32 killerId, const int32 numCampers, const int32 camperId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AsyncLoadItem(FName itemId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ASMShowGridDebugOutput();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ApplySameSurvivorSicknessStatusToKiller(bool sameVisual);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ApplyDeepWound();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AnalyticsProvidersForgetMe();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AnalyticsProvidersClearPersistentData();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AllowPalletPullUp(bool allowPullUp);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddToPlayerStat(FName statName, float amount);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddToCharacterStat(FName statName, float amount);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddToAchievementStat(FName statName, float amount);

	UFUNCTION(BlueprintCallable, Exec, BlueprintCallable)
	void DBD_AddSlasherPips(int32 count, bool forceReset);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddRecentlyPlayedWithPlayer(const FString& playerKrakenId) const;

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddPerkTokens(int32 numberOfTokensToAdd);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddPartyInviteToast(const FString& partyId);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddNotificationToast();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddInvitationToast();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddHP();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddFriend(const FString& userKrakenID);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddCamperPips(int32 count, bool forceReset);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddBotWithId(const int32 id);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddBot();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ActivateWeakenedMechanic(bool on);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ActivateEscapeDoor();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ActivateAIAllSlashers(bool activate, int32 playerRank);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ActivateAIAllCampers(bool activate, int32 playerRank);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ActivateAIAll(bool activate, int32 playerRank);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_ActivateAI(bool activate, int32 playerRank);

public:
	UDBDCheatManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCheatManager) { return 0; }
