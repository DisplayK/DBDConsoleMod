#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K26AimingGuide.generated.h"

UCLASS()
class AK26AimingGuide : public AActor
{
	GENERATED_BODY()

public:
	AK26AimingGuide();
};

FORCEINLINE uint32 GetTypeHash(const AK26AimingGuide) { return 0; }
