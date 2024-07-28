#pragma once

#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "S28P03.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US28P03 : public UBoonPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _lingerDuration;

public:
	US28P03();
};

FORCEINLINE uint32 GetTypeHash(const US28P03) { return 0; }
