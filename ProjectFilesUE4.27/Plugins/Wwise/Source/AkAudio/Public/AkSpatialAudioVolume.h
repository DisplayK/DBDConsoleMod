#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkSpatialAudioVolume.generated.h"

class UAkRoomComponent;
class UAkSurfaceReflectorSetComponent;
class UAkLateReverbComponent;

UCLASS()
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkRoomComponent* Room;
    
    AAkSpatialAudioVolume();
};

