#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GuardSlowingZone.generated.h"

UCLASS()
class THEK30_API AGuardSlowingZone : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnZoneEndOverlap(AActor* overlappedActor, AActor* otherActor);

	UFUNCTION()
	void OnZoneBeginOverlap(AActor* overlappedActor, AActor* otherActor);

public:
	AGuardSlowingZone();
};

FORCEINLINE uint32 GetTypeHash(const AGuardSlowingZone) { return 0; }
