#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ProvingGroundManager.generated.h"

UCLASS()
class PROVINGGROUND_API UProvingGroundManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UProvingGroundManager();
};

FORCEINLINE uint32 GetTypeHash(const UProvingGroundManager) { return 0; }
