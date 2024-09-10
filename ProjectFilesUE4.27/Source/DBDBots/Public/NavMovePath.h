#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavMovePath.generated.h"

UCLASS()
class DBDBOTS_API UNavMovePath : public UObject
{
	GENERATED_BODY()

public:
	UNavMovePath();
};

FORCEINLINE uint32 GetTypeHash(const UNavMovePath) { return 0; }
