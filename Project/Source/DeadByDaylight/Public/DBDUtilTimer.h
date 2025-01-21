#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDTimer.h"
#include "DBDUtilTimer.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDUtilTimer : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void Update(FDBDTimer& Timer, float deltaTime);

	UFUNCTION(BlueprintCallable)
	static void Stop(FDBDTimer& Timer);

	UFUNCTION(BlueprintCallable)
	static void ResetTo(FDBDTimer& Timer, float time);

	UFUNCTION(BlueprintCallable)
	static void Reset(FDBDTimer& Timer);

	UFUNCTION(BlueprintPure)
	static bool IsDone(const FDBDTimer& Timer);

	UFUNCTION(BlueprintPure)
	static float GetTimeLeft(const FDBDTimer& Timer);

	UFUNCTION(BlueprintPure)
	static float GetTimeElapsed(const FDBDTimer& Timer);

	UFUNCTION(BlueprintPure)
	static float GetStartTime(const FDBDTimer& Timer);

	UFUNCTION(BlueprintPure)
	static float GetPercentTimeLeft(const FDBDTimer& Timer);

	UFUNCTION(BlueprintPure)
	static float GetPercentTimeElapsed(const FDBDTimer& Timer);

public:
	UDBDUtilTimer();
};

FORCEINLINE uint32 GetTypeHash(const UDBDUtilTimer) { return 0; }
