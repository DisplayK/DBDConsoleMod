#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkSpatialAudioVolume.generated.h"

class UAkSurfaceReflectorSetComponent;
class UAkRoomComponent;
class UAkLateReverbComponent;

UCLASS()
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export)
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export)
	UAkLateReverbComponent* LateReverb;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export)
	UAkRoomComponent* Room;

public:
	AAkSpatialAudioVolume();
};

FORCEINLINE uint32 GetTypeHash(const AAkSpatialAudioVolume) { return 0; }
