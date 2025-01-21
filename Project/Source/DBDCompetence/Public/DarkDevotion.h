#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "DarkDevotion.generated.h"

class UTerrorRadiusEmitterComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDarkDevotion : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UTerrorRadiusEmitterComponent* _obsessionTerrorRadiusEmitter;

	UPROPERTY(EditAnywhere)
	float _obsessionTerrorRadius;

	UPROPERTY(EditAnywhere)
	float _simulatedFixedDistance;

public:
	UDarkDevotion();
};

FORCEINLINE uint32 GetTypeHash(const UDarkDevotion) { return 0; }
