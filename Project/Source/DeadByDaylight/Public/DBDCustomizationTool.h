#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "DBDCustomizationToolData.h"
#include "DBDCustomizationTool.generated.h"

class ABaseSky;

UCLASS()
class ADBDCustomizationTool : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<ABaseSky> OverallLightingClass;

	UPROPERTY(EditAnywhere)
	FDBDCustomizationToolData CustomizationData;

	UPROPERTY()
	TArray<AActor*> _spawnedActors;

public:
	ADBDCustomizationTool();
};

FORCEINLINE uint32 GetTypeHash(const ADBDCustomizationTool) { return 0; }
