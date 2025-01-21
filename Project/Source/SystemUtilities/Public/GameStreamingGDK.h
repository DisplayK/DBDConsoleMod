#pragma once

#include "CoreMinimal.h"
#include "GameStreamingSubsytem.h"
#include "GameStreamingGDK.generated.h"

UCLASS()
class SYSTEMUTILITIES_API UGameStreamingGDK : public UGameStreamingSubsytem
{
	GENERATED_BODY()

public:
	UGameStreamingGDK();
};

FORCEINLINE uint32 GetTypeHash(const UGameStreamingGDK) { return 0; }
