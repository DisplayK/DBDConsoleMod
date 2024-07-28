#pragma once

#include "CoreMinimal.h"
#include "LightBurnable.h"
#include "PhantomTrapBurnable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEHAG_API UPhantomTrapBurnable : public ULightBurnable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _traceZOffset;

public:
	UPhantomTrapBurnable();
};

FORCEINLINE uint32 GetTypeHash(const UPhantomTrapBurnable) { return 0; }
