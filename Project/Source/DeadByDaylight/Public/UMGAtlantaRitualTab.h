#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlantaRitualTab.generated.h"

class UUMGAltantaRitual;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaRitualTab : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* ContainerBox;

private:
	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGAltantaRitual> _itemWidgetClass;

private:
	UFUNCTION()
	void BroadcastOnClaimRewardsButtonPressed(const int32 ritualId);

public:
	UUMGAtlantaRitualTab();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaRitualTab) { return 0; }
