#pragma once

#include "CoreMinimal.h"
#include "EEventItemContentType.generated.h"

UENUM(BlueprintType)
enum class EEventItemContentType : uint8
{
	None,
	Cells,
	Character,
	Customization,
	NameChangeCard,
	FreeTicket,
	OtherCurrency,
	Item,
	Addon,
	Offering,
	Count,
};
