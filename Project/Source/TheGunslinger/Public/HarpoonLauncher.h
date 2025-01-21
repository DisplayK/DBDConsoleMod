#pragma once

#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "DBDTunableRowHandle.h"
#include "HarpoonLauncher.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UHarpoonLauncher : public UKillerProjectileLauncher
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _launchSpeed;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _launchDistanceFromCamera;

	UPROPERTY(EditAnywhere)
	float _launchZOffset;

public:
	UHarpoonLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonLauncher) { return 0; }
