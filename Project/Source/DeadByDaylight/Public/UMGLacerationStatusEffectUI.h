#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGLacerationStatusEffectUI.generated.h"

class UTexture2D;
class UImage;
class UMaterialInstanceDynamic;
class UPaperSprite;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLacerationStatusEffectUI : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* LacerationDecoration;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* LacerationFill;

	UPROPERTY(EditDefaultsOnly)
	TArray<int32> _maximumLacerationDefinitions;

	UPROPERTY(EditDefaultsOnly)
	TArray<UPaperSprite*> _lacerationDecorationImages;

	UPROPERTY(EditDefaultsOnly)
	TArray<UTexture2D*> _lacerationFillImages;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _lacerationDefaultColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _lacerationFillFullColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName _glassShatterDisintigrateAnimationName;

private:
	UPROPERTY(Transient)
	UMaterialInstanceDynamic* _lacerationFillFullMI;

private:
	UFUNCTION()
	void OnFinishedBoomAnimation();

public:
	UUMGLacerationStatusEffectUI();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLacerationStatusEffectUI) { return 0; }
