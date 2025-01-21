#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGStatusEffectsWidget.generated.h"

class UHorizontalBox;
class UUMGStatusEffectIcon;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGStatusEffectsWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGStatusEffectIcon> AtlantaStatusEffectIconClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* StatusEffectsBox;

	UPROPERTY(BlueprintReadOnly, Transient, Export)
	TMap<FName, UUMGStatusEffectIcon*> _statusEffectsMap;

protected:
	UFUNCTION(BlueprintCallable)
	void RemoveExistingStatusEffect(const FString& statusEffectID);

public:
	UUMGStatusEffectsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGStatusEffectsWidget) { return 0; }
