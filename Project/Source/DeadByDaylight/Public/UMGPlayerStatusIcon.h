#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGPlayerStatusIcon.generated.h"

class UImage;
class UTexture2D;
class UProgressBar;
class UUMGStalkingStatusEffectUI;
class UMaterialInstanceDynamic;
class UUMGLacerationStatusEffectUI;
class UCanvasPanel;
class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPlayerStatusIcon : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	UProgressBar* HealthBar;

	UPROPERTY(BlueprintReadOnly, Export)
	UProgressBar* TimerBar;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* HealthBarContainer;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* TimerBarContainer;

	UPROPERTY(BlueprintReadOnly, Export)
	UTextBlock* PlayerName;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* StatusIconBloodTop;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* StatusIconBloodBottom;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* StatusIcon;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* ObsessionCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* BrokenIndicatorCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* AfflictionCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* AfflictionIntroCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* SleepStatusCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* SleepTimerCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* ReverseBearTrapCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* ReverseBearTrapArrow;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* SicknessCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* SicknessFill;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* SpectateCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* SelectedSpectatorCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* AgonyCanvas;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* HandsGrabbing;

	UPROPERTY(EditDefaultsOnly)
	float SicknessFillHighOpacity;

	UPROPERTY(EditDefaultsOnly)
	float SicknessFillLowOpacity;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* StatusEffectContainerCanvas;

	UPROPERTY(Transient)
	UMaterialInstanceDynamic* SicknessFillMI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _hookedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _hookedBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _trappedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _trappedBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _deadTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _deadBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _escapedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _carriedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _injuredTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _injuredBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _crawlingTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _crawlingBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _sacrificedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _sacrificedBloodTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _disconnectedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _deathBedTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _defaultTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGStalkingStatusEffectUI> UMGStalkingStatusEffectUIClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGLacerationStatusEffectUI> UMGLacerationStatusEffectUIClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 _maxNumberCharacterInName;

private:
	UPROPERTY(Transient, Export)
	UUMGStalkingStatusEffectUI* _stalkingStatusEffectUI;

	UPROPERTY(Transient, Export)
	UUMGLacerationStatusEffectUI* _lacerationStatusEffectUI;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetSleepingTimer(const float progress);

	UFUNCTION(BlueprintImplementableEvent)
	void SetReverseTrapProgressionTimer(float seconds);

	UFUNCTION(BlueprintCallable)
	void OnPlayerStatusButtonClicked();

public:
	UUMGPlayerStatusIcon();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPlayerStatusIcon) { return 0; }
