#pragma once

#include "CoreMinimal.h"
#include "BTTask_ExtMoveTo.h"
#include "BTTask_StealthMoveTo.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_StealthMoveTo : public UBTTask_ExtMoveTo
{
	GENERATED_BODY()

public:
	UBTTask_StealthMoveTo();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_StealthMoveTo) { return 0; }
