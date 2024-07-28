#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PostEventAtLocationAsyncOutputPin.h"
#include "PostEventAtLocationAsync.generated.h"

class UAkAudioEvent;
class UObject;
class UPostEventAtLocationAsync;

UCLASS()
class AKAUDIO_API UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FPostEventAtLocationAsyncOutputPin Completed;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static UPostEventAtLocationAsync* PostEventAtLocationAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);

private:
	UFUNCTION()
	void PollPostEventFuture();

public:
	UPostEventAtLocationAsync();
};

FORCEINLINE uint32 GetTypeHash(const UPostEventAtLocationAsync) { return 0; }
