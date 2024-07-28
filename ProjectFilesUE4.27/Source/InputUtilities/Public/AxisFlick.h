#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AxisFlick.generated.h"

UCLASS()
class INPUTUTILITIES_API UAxisFlick : public UObject
{
	GENERATED_BODY()

public:
	UAxisFlick();
};

FORCEINLINE uint32 GetTypeHash(const UAxisFlick) { return 0; }
