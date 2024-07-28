#pragma once

#include "CoreMinimal.h"
#include "BaseCameraTargetingStrategy.h"
#include "GunslingerCameraTargetingStrategy.generated.h"

UCLASS()
class THEGUNSLINGER_API UGunslingerCameraTargetingStrategy : public UBaseCameraTargetingStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FName _cameraSocketName;

	UPROPERTY(EditAnywhere)
	FName _survivorHarpoonSocketName;

public:
	UGunslingerCameraTargetingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UGunslingerCameraTargetingStrategy) { return 0; }
