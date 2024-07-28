#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Tormentor.generated.h"

UINTERFACE(Blueprintable)
class THEEXECUTIONER_API UTormentor : public UInterface
{
	GENERATED_BODY()
};

class THEEXECUTIONER_API ITormentor : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	FVector GetTormentTrailSpawnPoint();

	UFUNCTION(BlueprintImplementableEvent)
	FVector GetTormentTrailAttackSpawnPoint();

};
