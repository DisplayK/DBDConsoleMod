#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "TextBlockOverrideProperties.generated.h"

USTRUCT(BlueprintType)
struct FTextBlockOverrideProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	bool UseColor;

	UPROPERTY(EditInstanceOnly)
	FSlateColor Color;

	UPROPERTY(EditInstanceOnly)
	bool UseOpacity;

	UPROPERTY(EditInstanceOnly)
	float Opacity;

	UPROPERTY(EditInstanceOnly)
	bool UseSize;

	UPROPERTY(EditInstanceOnly)
	int32 Size;

public:
	DBDUIVIEWSCORE_API FTextBlockOverrideProperties();
};

FORCEINLINE uint32 GetTypeHash(const FTextBlockOverrideProperties) { return 0; }
