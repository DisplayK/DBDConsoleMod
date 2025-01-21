#pragma once

#include "CoreMinimal.h"
#include "EScaleType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EDPIScaleCurveRatio.h"
#include "UIScaleManager.generated.h"

class UDataTable;
class UCurveFloat;

UCLASS(BlueprintType)
class DBDUIMANAGERS_API UUIScaleManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDataTable* _dpiScaleCurveDB;

	UPROPERTY(Transient)
	UCurveFloat* _dpiScaleCurve;

public:
	UFUNCTION(BlueprintPure)
	float GetSkillCheckScaleFactor() const;

	UFUNCTION(BlueprintPure)
	float GetScaleFactor(EScaleType type) const;

	UFUNCTION(BlueprintPure)
	float GetMenuScaleFactor() const;

	UFUNCTION(BlueprintPure)
	float GetHudScaleFactor() const;

	UFUNCTION(BlueprintCallable)
	EDPIScaleCurveRatio GetDPIScaleCurveRatio();

public:
	UUIScaleManager();
};

FORCEINLINE uint32 GetTypeHash(const UUIScaleManager) { return 0; }
