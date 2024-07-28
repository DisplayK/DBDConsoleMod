#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "MeshRotationCorrectionSubAnimInstance.generated.h"

class UCharacterMovementComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UMeshRotationCorrectionSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _rotationInterpSpeed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	FRotator _toSlopeRotation;

private:
	UPROPERTY(Transient, Export)
	UCharacterMovementComponent* _movementComponent;

public:
	UMeshRotationCorrectionSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMeshRotationCorrectionSubAnimInstance) { return 0; }
