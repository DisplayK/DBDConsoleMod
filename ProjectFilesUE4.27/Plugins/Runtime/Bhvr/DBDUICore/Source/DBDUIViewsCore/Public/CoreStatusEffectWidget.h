#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreStatusEffectWidget.generated.h"

class UCoreStatusEffectIcon;
class UGridPanel;

UCLASS(EditInlineNew)
class UCoreStatusEffectWidget : public UCoreBaseHudWidget, public IStatusEffectViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, NoClear)
	int32 InactiveThreshold;

	UPROPERTY(EditDefaultsOnly, NoClear)
	int32 PrepooledItemAmount;

	UPROPERTY(EditDefaultsOnly, NoClear)
	int32 ItemsByColumn;

	UPROPERTY(EditDefaultsOnly, NoClear)
	float EvenColumnOffset;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreStatusEffectIcon> CoreStatusEffectIconClass;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* StatusEffectContainer;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreStatusEffectIcon*> _statusEffectPool;

	UPROPERTY(Transient)
	TArray<FName> _statusEffectOrder;

	UPROPERTY(BlueprintReadOnly, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UCoreStatusEffectIcon*> _statusEffectMap;

protected:
	UFUNCTION(BlueprintPure)
	TMap<FName, UCoreStatusEffectIcon*> GetStatusEffectMap() const;

public:
	UCoreStatusEffectWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStatusEffectWidget) { return 0; }
