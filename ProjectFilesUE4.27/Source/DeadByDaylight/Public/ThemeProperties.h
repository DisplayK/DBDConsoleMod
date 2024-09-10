#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "EThemeColorId.h"
#include "GameplayElementSubstitutions.h"
#include "EOfferingEffectType.h"
#include "ThemeProperties.generated.h"

class UAkAudioBank;
class UBlackboardData;

USTRUCT(BlueprintType)
struct FThemeProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Weather;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioStateThemes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioStateWeather;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioThemeEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioLimitPointEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ThemeNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EThemeColorId ThemeColorId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOfferingEffectType ThemeSelectionOfferingEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayElementSubstitutions> SubstitutionElements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIDString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlackboardData* Blackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Gesture;

public:
	DEADBYDAYLIGHT_API FThemeProperties();
};

FORCEINLINE uint32 GetTypeHash(const FThemeProperties) { return 0; }
