#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClosetAnalytics.generated.h"

class ASlasherPlayer;
class ACamperPlayer;

UCLASS(BlueprintType)
class UClosetAnalytics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void RecordClosetSearchSuccess(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	static void RecordClosetSearchFail(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	static void IncrementClosetEnter(ACamperPlayer* survivor);

public:
	UClosetAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const UClosetAnalytics) { return 0; }
