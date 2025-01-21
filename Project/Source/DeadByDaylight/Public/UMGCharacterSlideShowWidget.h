#pragma once

#include "CoreMinimal.h"
#include "CharacterSlideData.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGCharacterSlideShowWidget.generated.h"

class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class UUMGCharacterSlideShowWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	TMap<FName, TSoftObjectPtr<UTexture2D>> _perkCategoriesIcons;

	UPROPERTY(EditDefaultsOnly)
	float SecondsBeforeNextSlide;

private:
	UFUNCTION()
	void WaitAndFadeOut();

	UFUNCTION()
	void SwitchCharacterSlide();

	UFUNCTION()
	void FadeOut();

	UFUNCTION()
	void FadeIn();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void DisplayCharacterSlide(const FCharacterSlideData& characterSlide);

public:
	UUMGCharacterSlideShowWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterSlideShowWidget) { return 0; }
