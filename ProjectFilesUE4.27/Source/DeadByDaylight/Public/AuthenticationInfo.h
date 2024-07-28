#pragma once

#include "CoreMinimal.h"
#include "AuthenticationInfo.generated.h"

USTRUCT()
struct FAuthenticationInfo
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FAuthenticationInfo();
};

FORCEINLINE uint32 GetTypeHash(const FAuthenticationInfo) { return 0; }
