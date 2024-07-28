#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "MoriComponent.generated.h"

class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMoriComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UInteractionDefinition>> _moriInteractionClasses;

public:
	UFUNCTION(BlueprintCallable)
	void OnMoriUpdateStart();

	UFUNCTION(BlueprintCallable)
	void OnMoriFinished();

	UFUNCTION(BlueprintCallable)
	void OnMoriChargeCompleted();

public:
	UMoriComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMoriComponent) { return 0; }
