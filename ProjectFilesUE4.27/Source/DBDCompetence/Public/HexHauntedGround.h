#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "HexHauntedGround.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHexHauntedGround : public UHexPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _exposedStatusEffectDuration;

public:
	UHexHauntedGround();
};

FORCEINLINE uint32 GetTypeHash(const UHexHauntedGround) { return 0; }
