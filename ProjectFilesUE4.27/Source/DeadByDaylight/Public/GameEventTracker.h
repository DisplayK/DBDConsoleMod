#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDBDScoreTypes.h"
#include "GameplayEventDynamicDelegate.h"
#include "GameflowEventDynamicDelegate.h"
#include "GameEventTracker.generated.h"

class ADBDPlayerState;
class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UGameEventTracker : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FGameplayEventDynamicDelegate OnGameplayEvent;

	UPROPERTY(BlueprintAssignable)
	FGameflowEventDynamicDelegate OnGameflowEvent;

public:
	UFUNCTION(BlueprintCallable)
	void FireGameflowEvent(EDBDScoreTypes eventType, float amount, const ADBDPlayerState* instigator, FName data);

	UFUNCTION(BlueprintCallable)
	void FireGameEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);

public:
	UGameEventTracker();
};

FORCEINLINE uint32 GetTypeHash(const UGameEventTracker) { return 0; }
