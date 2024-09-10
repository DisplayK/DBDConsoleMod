#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StatusEffectViewData.h"
#include "CoreStatusEffectIcon.generated.h"

UCLASS(EditInlineNew)
class UCoreStatusEffectIcon : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateWidget();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdatePercentageFill(float percentage);

	UFUNCTION(BlueprintCallable)
	void SetStatusEffectData(const FStatusEffectViewData& data);

	UFUNCTION(BlueprintCallable)
	void SetInactiveTicks(const int32 inactiveTicks);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ResetWidget();

	UFUNCTION(BlueprintCallable)
	FStatusEffectViewData GetStatusEffectData();

	UFUNCTION(BlueprintPure)
	int32 GetInactiveTicks() const;

public:
	UCoreStatusEffectIcon();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStatusEffectIcon) { return 0; }
