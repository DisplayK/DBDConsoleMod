#pragma once

#include "CoreMinimal.h"
#include "BTService_FindObject.h"
#include "BTService_FindObject_K28Remnant.generated.h"

UCLASS()
class UBTService_FindObject_K28Remnant : public UBTService_FindObject
{
	GENERATED_BODY()

public:
	UBTService_FindObject_K28Remnant();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject_K28Remnant) { return 0; }
