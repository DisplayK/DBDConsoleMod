#pragma once

#include "CoreMinimal.h"
#include "ESharedAuthenticationProvider.generated.h"

UENUM(BlueprintType)
enum class ESharedAuthenticationProvider : uint8
{
	None,
	Facebook,
	Google,
	NetEase,
	Kraken,
	SignInWithApple,
};
