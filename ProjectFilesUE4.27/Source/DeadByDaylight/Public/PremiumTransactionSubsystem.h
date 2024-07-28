#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PremiumTransactionSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPremiumTransactionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPremiumTransactionSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UPremiumTransactionSubsystem) { return 0; }
