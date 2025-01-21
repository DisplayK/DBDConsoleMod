#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameStreamingSubsytem.generated.h"

UCLASS()
class SYSTEMUTILITIES_API UGameStreamingSubsytem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UGameStreamingSubsytem();
};

FORCEINLINE uint32 GetTypeHash(const UGameStreamingSubsytem) { return 0; }
