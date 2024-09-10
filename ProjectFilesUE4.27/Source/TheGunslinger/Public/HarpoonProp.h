#pragma once

#include "CoreMinimal.h"
#include "GunslingerHarpoon.h"
#include "GameFramework/Actor.h"
#include "HarpoonProp.generated.h"

class USkeletalMeshComponent;

UCLASS()
class THEGUNSLINGER_API AHarpoonProp : public AActor, public IGunslingerHarpoon
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Export)
	USkeletalMeshComponent* _skeletalMesh;

public:
	AHarpoonProp();
};

FORCEINLINE uint32 GetTypeHash(const AHarpoonProp) { return 0; }
