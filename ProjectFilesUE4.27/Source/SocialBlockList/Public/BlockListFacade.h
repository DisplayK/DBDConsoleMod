#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlockListFacade.generated.h"

UCLASS()
class SOCIALBLOCKLIST_API UBlockListFacade : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UBlockListFacade();
};

FORCEINLINE uint32 GetTypeHash(const UBlockListFacade) { return 0; }
