#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "UObject/ScriptInterface.h"
#include "LandingPageTabData.generated.h"

class ISlateTextureAtlasInterface;

USTRUCT()
struct FLandingPageTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText DefaultText;

	UPROPERTY(EditAnywhere)
	TScriptInterface<ISlateTextureAtlasInterface> DefaultImage;

	UPROPERTY(EditAnywhere)
	FSlateColor BannerBackgroudColor;

	UPROPERTY(EditAnywhere)
	bool IsButtonEnabled;

public:
	DEADBYDAYLIGHT_API FLandingPageTabData();
};

FORCEINLINE uint32 GetTypeHash(const FLandingPageTabData) { return 0; }
