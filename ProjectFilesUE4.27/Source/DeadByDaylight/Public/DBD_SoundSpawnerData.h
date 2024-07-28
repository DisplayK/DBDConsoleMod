#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "DBD_SoundSpawnerData.generated.h"

class UObject;
class AActor;

USTRUCT(BlueprintType)
struct FDBD_SoundSpawnerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftClassPtr<UObject>> TriggerObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TriggerVisualForCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TriggerVisualForSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftClassPtr<AActor>> ActorToSpawnVisual;

public:
	DEADBYDAYLIGHT_API FDBD_SoundSpawnerData();
};

FORCEINLINE uint32 GetTypeHash(const FDBD_SoundSpawnerData) { return 0; }
