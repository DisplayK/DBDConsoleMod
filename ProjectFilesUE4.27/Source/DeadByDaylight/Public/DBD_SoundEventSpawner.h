#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBD_SoundSpawnerData.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "DBD_SoundEventSpawner.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBD_SoundEventSpawner : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDBD_SoundSpawnerData> AtlantaSoundDescriptor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDBD_SoundSpawnerData> SoundDescriptor;

protected:
	UPROPERTY(Transient)
	TArray<TSubclassOf<AActor>> _loadedSoundAssets;

protected:
	UFUNCTION()
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

	UFUNCTION()
	void AssetsLoaded();

public:
	ADBD_SoundEventSpawner();
};

FORCEINLINE uint32 GetTypeHash(const ADBD_SoundEventSpawner) { return 0; }
