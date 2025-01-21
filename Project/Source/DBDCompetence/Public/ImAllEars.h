#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "GameplayTagContainer.h"
#include "ImAllEars.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UImAllEars : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	int32 _cooldownByLevel;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _durationByLevel;

	UPROPERTY(EditAnywhere, EditFixedSize)
	bool _useTerrorRadius;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _triggerOutsideRadius;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_OnCamperLoudNoise(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintCallable)
	float GetDurationAtLevel();

	UFUNCTION(BlueprintCallable)
	int32 GetCooldownAtLevel();

public:
	UImAllEars();
};

FORCEINLINE uint32 GetTypeHash(const UImAllEars) { return 0; }
