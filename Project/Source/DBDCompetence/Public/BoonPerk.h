#pragma once

#include "CoreMinimal.h"
#include "TotemBoundPerk.h"
#include "BoonPerk.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBoonPerk : public UTotemBoundPerk
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);

public:
	UBoonPerk();
};

FORCEINLINE uint32 GetTypeHash(const UBoonPerk) { return 0; }
