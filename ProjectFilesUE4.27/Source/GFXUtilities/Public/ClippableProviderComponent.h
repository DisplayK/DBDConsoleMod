#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClippableProviderComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UClippableProviderComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	TSet<UPrimitiveComponent*> _ignoredPrimitives;

public:
	UFUNCTION(BlueprintCallable)
	void SetIgnoredPrimitives(const TArray<UPrimitiveComponent*> ignoredPrimitives);

	UFUNCTION(BlueprintCallable)
	void AddIgnoredPrimitives(const TArray<UPrimitiveComponent*>& ignoredPrimitives);

public:
	UClippableProviderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UClippableProviderComponent) { return 0; }
