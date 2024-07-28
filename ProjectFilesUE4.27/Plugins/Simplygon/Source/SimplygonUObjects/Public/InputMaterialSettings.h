#pragma once

#include "CoreMinimal.h"
#include "InputMaterialSettings.generated.h"

USTRUCT(BlueprintType)
struct FInputMaterialSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaterialMapping;

public:
	SIMPLYGONUOBJECTS_API FInputMaterialSettings();
};

FORCEINLINE uint32 GetTypeHash(const FInputMaterialSettings) { return 0; }
