#pragma once

#include "CoreMinimal.h"
#include "ESharedAuthenticationTokenType.generated.h"

UENUM(BlueprintType)
enum class ESharedAuthenticationTokenType : uint8
{
	None,
	AccessToken,
	AuthorizationCode,
	IdentityToken,
};
