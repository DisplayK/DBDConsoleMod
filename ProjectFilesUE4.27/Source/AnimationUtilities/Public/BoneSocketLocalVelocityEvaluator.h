#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "BoneSocketLocalVelocityEvaluator.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UBoneSocketLocalVelocityEvaluator : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _meshComponent;

	UPROPERTY(EditAnywhere)
	TArray<FName> _trackedBoneSocketNames;

public:
	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FVector GetLocalVelocity(const FName boneSocketName) const;

public:
	UBoneSocketLocalVelocityEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UBoneSocketLocalVelocityEvaluator) { return 0; }
