#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDAtlantaDesignTunables.generated.h"

class UHookedIndicatorWidget;
class UStaticMesh;
class UUMGRoleSelectionScreen;
class UNoiseIndicatorWidget;
class UUMGAtlantaStoreScreen;
class UDBDAtlantaStructuredData;
class UKillerNoiseIndicatorWidget;
class UUMGAtlantaTutorialScreen;
class UUMGCustomizationScreenWidget;
class UMediaPlayer;
class UUMGGenericPopup;
class UExitOpenedIndicatorWidget;
class UUMGStreamVideoWidget;
class UGeneratorIndicatorWidget;
class UUMGAtlantaSettingScreen;
class UBaseIndicatorWidget;
class UTerrorRadiusIndicatorWidget;
class USafeZoneManagerWidget;
class UUMGAtlantaFriendListScreen;
class UDBDRankDesignTunables;
class UUMGAtlantaRitualsScreen;
class UUMGAtlantaNavigationScreen;
class UUMGLoadingScreenWidget;
class UUMGAtlantaLevelUpPopup;
class UUMGLobbyScreen;
class UUMGInboxScreen;
class USharedAuthenticationComponent;
class UUMGSwitcherScreen;
class UMobileBaseUserWidget;
class UMaterialInstanceConstant;
class UUMGSplashScreen;
class UUMGCommandDebugButton;
class UAtlantaObjectiveWidget;
class UUMGAtlantaLegalMenuScreen;
class UUMGCloseTooltipWidget;
class UUMGToastNotificationScreen;
class UDBDCurrencyConversionTunables;

UCLASS(BlueprintType, Transient)
class DEADBYDAYLIGHT_API UDBDAtlantaDesignTunables : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UDBDAtlantaStructuredData> AtlantaStructuredDataClass;

	UPROPERTY(BlueprintReadOnly, Transient)
	UDBDAtlantaStructuredData* AtlantaStructuredData;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UNoiseIndicatorWidget> CloseNoiseIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UExitOpenedIndicatorWidget> ExitOpenedIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UGeneratorIndicatorWidget> GeneratorIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UHookedIndicatorWidget> HookedIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UKillerNoiseIndicatorWidget> KillerCuesIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UBaseIndicatorWidget> GlobalSoundIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UTerrorRadiusIndicatorWidget> DirectionalTerrorRadiusIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UNoiseIndicatorWidget> LoudNoiseIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UNoiseIndicatorWidget> StealthBrokenIndicatorTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<USafeZoneManagerWidget> SafeZoneManagerTemplate;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGRoleSelectionScreen> UMGRoleSelectionScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAtlantaTutorialScreen> UMGAtlantaTutorialScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAtlantaNavigationScreen> UMGNavigationScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGInboxScreen> UMGInboxScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<USharedAuthenticationComponent> SharedAuthenticationComponent;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGSwitcherScreen> UMGPanelScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGLobbyScreen> UMGLobbyScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftObjectPtr<UStaticMesh> AtlantaChaseVignetteStaticMesh;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftObjectPtr<UMaterialInstanceConstant> AtlantaChaseVignetteMaterialInstance;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGGenericPopup> UMGGenericPopupClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAtlantaLevelUpPopup> UMGLevelUpPopupClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGGenericPopup> UMGTutorialPopupClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGLoadingScreenWidget> UMGLoadingScreenWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGSplashScreen> UMGSplashScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGCommandDebugButton> UMGCommandDebugButtonClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UAtlantaObjectiveWidget> UMGAtlantaObjectiveClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAtlantaStoreScreen> UMGStoreScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGCustomizationScreenWidget> UMGCustomizationScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAtlantaSettingScreen> UMGOverlayMenuScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAtlantaRitualsScreen> UMGRitualScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UMobileBaseUserWidget> UMGLoadingWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGCloseTooltipWidget> UMGCloseTooltipWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAtlantaFriendListScreen> UMGAtlantaFriendListScreen;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGToastNotificationScreen> UMGToastNotificationScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAtlantaLegalMenuScreen> UMGAtlantaLegalMenuScreenClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UDBDRankDesignTunables> RankDesignTunableClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGStreamVideoWidget> UMGStreamVideoWidgetClass;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath AtlantaTransitionLightEffectsScreen;

	UPROPERTY(EditAnywhere, NoClear)
	UDBDCurrencyConversionTunables* CurrencyConversionTunables;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftObjectPtr<UMediaPlayer> MediaPlayerAsset;

public:
	UDBDAtlantaDesignTunables();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAtlantaDesignTunables) { return 0; }
