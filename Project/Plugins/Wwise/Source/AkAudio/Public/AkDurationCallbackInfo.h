#pragma once

#include "CoreMinimal.h"
#include "AkEventCallbackInfo.h"
#include "AkDurationCallbackInfo.generated.h"

UCLASS()
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float EstimatedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 AudioNodeID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 MediaID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bStreaming;

public:
	UAkDurationCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkDurationCallbackInfo) { return 0; }
