#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GiftManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UGiftManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UGiftManager();
};

FORCEINLINE uint32 GetTypeHash(const UGiftManager) { return 0; }
