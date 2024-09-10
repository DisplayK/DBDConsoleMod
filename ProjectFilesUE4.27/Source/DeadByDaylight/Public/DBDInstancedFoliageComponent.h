#pragma once

#include "CoreMinimal.h"
#include "DBDFoliageInfo.h"
#include "Components/ActorComponent.h"
#include "DBDInstancedFoliageComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDInstancedFoliageComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 NextBaseId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export)
	TMap<int32, USceneComponent*> InstanceBaseMap;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FDBDFoliageInfo> foliage;

public:
	UDBDInstancedFoliageComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDInstancedFoliageComponent) { return 0; }
