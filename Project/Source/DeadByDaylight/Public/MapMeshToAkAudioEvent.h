#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MapMeshToAkAudioEvent.generated.h"

class UStaticMesh;
class UAkAudioEvent;

USTRUCT()
struct FMapMeshToAkAudioEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UStaticMesh> Mesh;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* SoundEvent;

	UPROPERTY(EditAnywhere)
	float MinDelayBetweenEvents;

	UPROPERTY(EditAnywhere)
	float MinDelayBetweenObject;

public:
	DEADBYDAYLIGHT_API FMapMeshToAkAudioEvent();
};

FORCEINLINE uint32 GetTypeHash(const FMapMeshToAkAudioEvent) { return 0; }
