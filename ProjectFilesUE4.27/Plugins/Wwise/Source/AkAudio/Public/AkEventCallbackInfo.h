#pragma once

#include "CoreMinimal.h"
#include "AkCallbackInfo.h"
#include "AkEventCallbackInfo.generated.h"

UCLASS()
class AKAUDIO_API UAkEventCallbackInfo : public UAkCallbackInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 PlayingID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 EventID;

public:
	UAkEventCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkEventCallbackInfo) { return 0; }
