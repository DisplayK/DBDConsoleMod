#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrimitiveCollection.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class PHYSICSUTILITIES_API UPrimitiveCollection : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TSet<TWeakObjectPtr<UPrimitiveComponent>> _primitives;

public:
	UFUNCTION(BlueprintCallable)
	void Remove(UPrimitiveComponent* primitive);

	UFUNCTION(BlueprintCallable)
	void Add(UPrimitiveComponent* primitive);

public:
	UPrimitiveCollection();
};

FORCEINLINE uint32 GetTypeHash(const UPrimitiveCollection) { return 0; }
