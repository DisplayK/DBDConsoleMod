#pragma once

#include "CoreMinimal.h"
#include "HitValidationRecorder.h"
#include "HitValidationValidator.h"
#include "HitValidationGameConfig.generated.h"

USTRUCT()
struct FHitValidationGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Enable;

	UPROPERTY()
	bool EnableCollisionCheck;

	UPROPERTY()
	FHitValidationRecorder Recorder;

	UPROPERTY()
	TArray<FHitValidationValidator> Validators;

public:
	DEADBYDAYLIGHT_API FHitValidationGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationGameConfig) { return 0; }
