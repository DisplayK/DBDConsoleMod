#pragma once

#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "UMGLoadoutItemButton.h"
#include "PerkActionButton.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UPerkActionButton : public UUMGLoadoutItemButton
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	UTextBlock* TextUnlockLevelTitle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool Activatable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility SelectedImageVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ClickableButtonVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ClickableImageVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility ProgressbarVisibility;

	UPROPERTY(BlueprintReadWrite, Transient)
	float IdleTime;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateWidgetPercentage(float percentage);

	UFUNCTION(BlueprintImplementableEvent)
	void SetIsActivatable(bool isClickable);

	UFUNCTION(BlueprintImplementableEvent)
	void SetCanEverBeActivated();

	UFUNCTION(BlueprintImplementableEvent)
	void CallSetPerkLevel(const int32 level);

	UFUNCTION(BlueprintImplementableEvent)
	void CallHidePerkLevel();

public:
	UPerkActionButton();
};

FORCEINLINE uint32 GetTypeHash(const UPerkActionButton) { return 0; }
