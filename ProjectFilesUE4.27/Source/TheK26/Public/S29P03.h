#pragma once

#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "S29P03.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US29P03 : public UBoonPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _recoverSpeedPercentage;

public:
	US29P03();
};

FORCEINLINE uint32 GetTypeHash(const US29P03) { return 0; }
