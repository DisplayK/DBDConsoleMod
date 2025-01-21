#pragma once

#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "GameFramework/Actor.h"
#include "GeneratorEntity.generated.h"

class UMontagePlayer;
class AGenerator;

UCLASS()
class DEADBYDAYLIGHT_API AGeneratorEntity : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AGenerator* _associatedGenerator;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UMontagePlayer* _montagePlayer;

public:
	UFUNCTION(BlueprintCallable)
	void SetSkeletalMeshActive(bool active);

	UFUNCTION(BlueprintCallable)
	void SetAssociatedGenerator(AGenerator* generator);

	UFUNCTION(BlueprintCallable)
	void PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower);

	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

public:
	AGeneratorEntity();
};

FORCEINLINE uint32 GetTypeHash(const AGeneratorEntity) { return 0; }
