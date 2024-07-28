#pragma once

#include "CoreMinimal.h"
#include "EFriendSuggestionType.generated.h"

UENUM(BlueprintType)
enum class EFriendSuggestionType : uint8
{
	None,
	Facebook,
	Google,
};
