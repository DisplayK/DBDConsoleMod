#pragma once

#include "CoreMinimal.h"
#include "Dependency.h"
#include "UObject/SoftObjectPtr.h"
#include "BuiltLevelData.generated.h"

class UAkAudioBank;

USTRUCT(BlueprintType)
struct FBuiltLevelData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName ThemeName;

	UPROPERTY()
	FName ThemeWeather;

	UPROPERTY()
	FName AudioStateThemes;

	UPROPERTY()
	FName AudioStateWeather;

	UPROPERTY()
	FName AudioThemeEvent;

	UPROPERTY()
	FName AudioLimitPointEvent;

	UPROPERTY()
	TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank;

	UPROPERTY()
	FString MapName;

	UPROPERTY()
	int32 TileCount;

	UPROPERTY()
	TArray<FDependency> Dependencies;

	UPROPERTY()
	FName SpecialEventId;

public:
	DEADBYDAYLIGHT_API FBuiltLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FBuiltLevelData) { return 0; }
