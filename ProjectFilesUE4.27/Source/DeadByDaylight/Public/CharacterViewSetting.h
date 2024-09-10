#pragma once

#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharacterViewSetting.generated.h"

USTRUCT()
struct FCharacterViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FCharacterDropdown CharacterDropdown;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FCharacterViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterViewSetting) { return 0; }
