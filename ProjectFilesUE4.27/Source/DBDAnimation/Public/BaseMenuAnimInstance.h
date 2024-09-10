#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "EGameFlowStep.h"
#include "BaseMenuAnimInstance.generated.h"

class ADBDMenuPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UBaseMenuAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnCustomizationChanged(const TArray<FName>& customizationArray);

	UFUNCTION(BlueprintPure)
	ADBDMenuPlayer* GetOwningMenuPlayer() const;

	UFUNCTION(BlueprintPure)
	EGameFlowStep GetCurrentMenu() const;

public:
	UBaseMenuAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBaseMenuAnimInstance) { return 0; }
