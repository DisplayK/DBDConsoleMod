#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDPrimaryDataAsset.h"
#include "ItemDataAsset.generated.h"

class UGameplayModifierContainerDataAsset;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UItemDataAsset : public UDBDPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<AActor> ActorClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSoftObjectPtr<UGameplayModifierContainerDataAsset>> RequiredModifierContainers;

public:
	UItemDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UItemDataAsset) { return 0; }
