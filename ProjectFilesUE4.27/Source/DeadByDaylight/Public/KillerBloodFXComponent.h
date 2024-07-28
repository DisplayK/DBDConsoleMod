#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerBloodFXComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerBloodFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void StopBloodSplatter();

	UFUNCTION(BlueprintCallable)
	void PlayBloodSplatter();

public:
	UKillerBloodFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerBloodFXComponent) { return 0; }
