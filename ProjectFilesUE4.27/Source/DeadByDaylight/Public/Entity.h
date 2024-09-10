#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Entity.generated.h"

class UCurveFloat;
class UMaterialHelper;
class USkeletalMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API AEntity : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _dissolveCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _revealsCurve;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMaterialHelper* _materialHelper;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _skeletalMesh;

public:
	AEntity();
};

FORCEINLINE uint32 GetTypeHash(const AEntity) { return 0; }
