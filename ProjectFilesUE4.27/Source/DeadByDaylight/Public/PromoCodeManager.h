#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PromoCodeManager.generated.h"

UCLASS()
class UPromoCodeManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPromoCodeManager();
};

FORCEINLINE uint32 GetTypeHash(const UPromoCodeManager) { return 0; }
