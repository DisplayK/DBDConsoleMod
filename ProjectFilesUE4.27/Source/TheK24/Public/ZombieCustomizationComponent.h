#pragma once

#include "CoreMinimal.h"
#include "CustomizedSkeletalMesh.h"
#include "ZombieCustomizationComponent.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieCustomizationComponent : public UCustomizedSkeletalMesh
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<ACamperPlayer> _survivorSource;

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetZombieCustomization(ACamperPlayer* survivor);

public:
	UZombieCustomizationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UZombieCustomizationComponent) { return 0; }
