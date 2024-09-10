#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StreamVideoFactory.generated.h"

UCLASS()
class UStreamVideoFactory : public UObject
{
	GENERATED_BODY()

public:
	UStreamVideoFactory();
};

FORCEINLINE uint32 GetTypeHash(const UStreamVideoFactory) { return 0; }
