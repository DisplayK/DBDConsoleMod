#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PrimitivesRegistererComponent.generated.h"

class UPrimitiveCollection;
class UPrimitiveComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class PHYSICSUTILITIES_API UPrimitivesRegistererComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	TArray<UPrimitiveComponent*> _primitives;

	UPROPERTY(Transient)
	TWeakObjectPtr<UPrimitiveCollection> _primitiveCollection;

public:
	UFUNCTION(BlueprintCallable)
	void SetPrimitives(const TArray<UPrimitiveComponent*>& primitives);

public:
	UPrimitivesRegistererComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPrimitivesRegistererComponent) { return 0; }
