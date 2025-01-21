#pragma once

#include "CoreMinimal.h"
#include "GeneratorDrivenActor.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "CrowBomb.generated.h"

class USceneComponent;
class UWorldRunawayMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API ACrowBomb : public AGeneratorDrivenActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _innerRadius;

	UPROPERTY(EditAnywhere)
	float _outerRadius;

	UPROPERTY(EditAnywhere)
	float _maxTakeoffDelay;

	UPROPERTY(EditAnywhere)
	int32 _numCrows;

	UPROPERTY(EditAnywhere)
	int32 _crowCenterDistance;

	UPROPERTY(EditAnywhere)
	int32 _crowOuterDistance;

	UPROPERTY(EditAnywhere)
	int32 _eliminationSamples;

	UPROPERTY(EditAnywhere)
	float _eliminationStddev;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UWorldRunawayMeshComponent> _meshComponentClass;

	UPROPERTY(Replicated, Transient, Export)
	TArray<UWorldRunawayMeshComponent*> _crows;

	UPROPERTY(Export)
	USceneComponent* _root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _traceStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _traceEnd;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _landed;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerTakeOff(FVector triggerLocation);

	UFUNCTION(BlueprintCallable)
	void TriggerLand();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ACrowBomb();
};

FORCEINLINE uint32 GetTypeHash(const ACrowBomb) { return 0; }
