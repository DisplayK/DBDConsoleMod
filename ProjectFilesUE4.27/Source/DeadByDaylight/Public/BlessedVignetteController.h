#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlessedVignetteController.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlessedVignetteController : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnDeactivateBlessedVignette();

	UFUNCTION(BlueprintImplementableEvent)
	void OnActivateBlessedVignette();

public:
	UBlessedVignetteController();
};

FORCEINLINE uint32 GetTypeHash(const UBlessedVignetteController) { return 0; }
