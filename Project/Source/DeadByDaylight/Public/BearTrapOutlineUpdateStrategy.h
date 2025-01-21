#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "BearTrapOutlineUpdateStrategy.generated.h"

class UMapActorComponent;
class UCurveLinearColor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBearTrapOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FLinearColor UnrevealedColor;

	UPROPERTY(EditAnywhere)
	FLinearColor RevealedColorToSurvivor;

	UPROPERTY(EditAnywhere)
	UCurveLinearColor* KillerOutlineFadeCurve;

	UPROPERTY(Transient, Export)
	UMapActorComponent* _owningBearTrapMapActorComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetOwningBearTrapMapActorComponent(UMapActorComponent* mapActorComponent);

public:
	UBearTrapOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBearTrapOutlineUpdateStrategy) { return 0; }
