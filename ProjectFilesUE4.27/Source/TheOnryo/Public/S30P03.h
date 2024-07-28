#pragma once

#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "S30P03.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US30P03 : public UBoonPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _hasteLingerDuration;

public:
	US30P03();
};

FORCEINLINE uint32 GetTypeHash(const US30P03) { return 0; }
