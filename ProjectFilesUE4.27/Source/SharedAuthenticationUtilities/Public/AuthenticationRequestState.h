#pragma once

#include "CoreMinimal.h"
#include "AuthenticationRequestState.generated.h"

USTRUCT()
struct FAuthenticationRequestState
{
	GENERATED_BODY()

public:
	SHAREDAUTHENTICATIONUTILITIES_API FAuthenticationRequestState();
};

FORCEINLINE uint32 GetTypeHash(const FAuthenticationRequestState) { return 0; }
