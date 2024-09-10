#pragma once

#include "CoreMinimal.h"
#include "AkEventCallbackInfo.h"
#include "AkMarkerCallbackInfo.generated.h"

UCLASS()
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Identifier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Position;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Label;

public:
	UAkMarkerCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkMarkerCallbackInfo) { return 0; }
