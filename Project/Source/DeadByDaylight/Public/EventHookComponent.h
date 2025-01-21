#pragma once

#include "CoreMinimal.h"
#include "EventObjectComponent.h"
#include "EventHookComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventHookComponent : public UEventObjectComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	bool _updateOutlineForSurvivor;

	UPROPERTY(EditAnywhere)
	bool _updateOutlineForSlasher;

public:
	UFUNCTION(BlueprintCallable)
	void SetOutlineCarryingColorToDefault();

public:
	UEventHookComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventHookComponent) { return 0; }
