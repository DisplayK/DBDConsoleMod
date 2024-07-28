#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LegionCheatComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULegionCheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void DBD_LegionFrenzyForever();

public:
	ULegionCheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULegionCheatComponent) { return 0; }
