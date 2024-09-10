#pragma once

#include "CoreMinimal.h"
#include "PlayerProfileDAL.h"
#include "MobileProfileDAL.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UMobileProfileDAL : public UPlayerProfileDAL
{
	GENERATED_BODY()

public:
	UMobileProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UMobileProfileDAL) { return 0; }
