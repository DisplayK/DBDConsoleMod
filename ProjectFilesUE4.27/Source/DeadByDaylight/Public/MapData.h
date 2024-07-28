#pragma once

#include "CoreMinimal.h"
#include "TileProperties.h"
#include "UObject/SoftObjectPtr.h"
#include "Engine/DataAsset.h"
#include "MapData.generated.h"

class UProceduralGenerationData;
class UAkAudioBank;
class UBlackboardData;

UCLASS()
class UMapData : public UDataAsset
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
	int32 MapWidth;

	UPROPERTY()
	int32 MapHeight;

	UPROPERTY()
	bool Draft;

	UPROPERTY()
	TArray<FTileProperties> MapTileProperties;

	UPROPERTY()
	UBlackboardData* Blackboard;

	UPROPERTY()
	bool Gesture;

private:
	UPROPERTY(Transient)
	UProceduralGenerationData* _proceduralGenerationData;

public:
	UMapData();
};

FORCEINLINE uint32 GetTypeHash(const UMapData) { return 0; }
