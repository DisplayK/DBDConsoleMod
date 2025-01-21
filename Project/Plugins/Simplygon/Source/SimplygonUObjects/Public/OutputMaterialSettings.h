#pragma once

#include "CoreMinimal.h"
#include "OutputMaterialSettings.generated.h"

USTRUCT(BlueprintType)
struct FOutputMaterialSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TextureWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TextureHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MultisamplingLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GutterSpace;

public:
	SIMPLYGONUOBJECTS_API FOutputMaterialSettings();
};

FORCEINLINE uint32 GetTypeHash(const FOutputMaterialSettings) { return 0; }
