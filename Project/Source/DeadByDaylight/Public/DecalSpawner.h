#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DecalSpawner.generated.h"

class UDecalCollection;
class USpawnerStrategy;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDecalSpawner : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDecalCollection* _decalCollection;

	UPROPERTY(Transient)
	USpawnerStrategy* _spawnerStrategy;

public:
	UFUNCTION(BlueprintCallable)
	USpawnerStrategy* GetSpawnerStrategy();

public:
	UDecalSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UDecalSpawner) { return 0; }
