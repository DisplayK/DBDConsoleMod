#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ResiliencePerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UResiliencePerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeed;

public:
	UResiliencePerk();
};

FORCEINLINE uint32 GetTypeHash(const UResiliencePerk) { return 0; }
