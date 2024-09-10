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
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName ThemeName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName ThemeWeather;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName AudioStateThemes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName AudioStateWeather;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName AudioThemeEvent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName AudioLimitPointEvent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString MapName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 TileCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FDependency> Dependencies;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName SpecialEventId;

public:
	DEADBYDAYLIGHT_API FBuiltLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FBuiltLevelData) { return 0; }
