#pragma once

#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "PlayerOverlapHISMComponent.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerOverlapHISMComponent : public UHierarchicalInstancedStaticMeshComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UMaterialInterface*> _playerOverlapOverrides;

public:
	UPlayerOverlapHISMComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerOverlapHISMComponent) { return 0; }
