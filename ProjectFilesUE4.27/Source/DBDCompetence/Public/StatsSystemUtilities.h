#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TunableStat.h"
#include "UObject/ScriptInterface.h"
#include "StatsSystemUtilities.generated.h"

class IModifierProvider;

UCLASS(BlueprintType)
class DBDCOMPETENCE_API UStatsSystemUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void InitStatBP(FTunableStat& theStat, TScriptInterface<IModifierProvider> modifierProvider);

	UFUNCTION(BlueprintPure)
	static float GetStatValueBP(const FTunableStat& theStat);

public:
	UStatsSystemUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UStatsSystemUtilities) { return 0; }
