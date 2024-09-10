#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "StreamVideoScreenUMG.generated.h"

class UStreamVideoManager;

UCLASS()
class UStreamVideoScreenUMG : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UStreamVideoManager* _streamVideoManager;

private:
	UFUNCTION()
	void OnCloseTriggered();

public:
	UStreamVideoScreenUMG();
};

FORCEINLINE uint32 GetTypeHash(const UStreamVideoScreenUMG) { return 0; }
