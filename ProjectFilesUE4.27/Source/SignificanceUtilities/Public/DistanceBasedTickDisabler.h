#pragma once

#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "Components/ActorComponent.h"
#include "DistanceBasedTickDisabler.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class SIGNIFICANCEUTILITIES_API UDistanceBasedTickDisabler : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	bool _autoRegisterOwner;

	UPROPERTY(EditAnywhere)
	bool _autoRegisterTimelines;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _tickDisableDistance;

	UPROPERTY(EditAnywhere)
	bool _insignificantWhenBehindTheCamera;

	UPROPERTY(Export)
	TArray<UActorComponent*> _components;

public:
	UFUNCTION(BlueprintCallable)
	void UnregisterComponent(UActorComponent* component);

	UFUNCTION(BlueprintCallable)
	void RegisterComponent(UActorComponent* component);

public:
	UDistanceBasedTickDisabler();
};

FORCEINLINE uint32 GetTypeHash(const UDistanceBasedTickDisabler) { return 0; }
