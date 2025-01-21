#pragma once

#include "CoreMinimal.h"
#include "ELegalTermsStatus.generated.h"

UENUM(BlueprintType)
enum class ELegalTermsStatus : uint8
{
	None,
	Accepted,
	Declined,
};
