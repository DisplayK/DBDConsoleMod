#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K30Utilities.generated.h"

class AK30Power;
class AActor;
class AKnightGuard;

UCLASS(BlueprintType)
class UK30Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static int32 GetNextGuardIndex(const AActor* theK30);

	UFUNCTION(BlueprintPure)
	static AKnightGuard* GetNextGuard(const AActor* theK30);

	UFUNCTION(BlueprintPure)
	static AK30Power* GetK30Power(const AActor* theK30);

	UFUNCTION(BlueprintPure)
	static int32 GetCurrentGuardIndex(const AActor* theK30);

	UFUNCTION(BlueprintPure)
	static AKnightGuard* GetCurrentGuard(const AActor* theK30);

public:
	UK30Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK30Utilities) { return 0; }
