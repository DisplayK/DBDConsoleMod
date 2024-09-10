#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicGrass.generated.h"

class UMaterialParameterCollection;

UCLASS()
class ADynamicGrass : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UMaterialParameterCollection* _worldSettings;

public:
	ADynamicGrass();
};

FORCEINLINE uint32 GetTypeHash(const ADynamicGrass) { return 0; }
