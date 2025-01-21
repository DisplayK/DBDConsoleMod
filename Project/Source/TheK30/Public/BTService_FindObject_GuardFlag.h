#pragma once

#include "CoreMinimal.h"
#include "BTService_FindObject.h"
#include "BTService_FindObject_GuardFlag.generated.h"

UCLASS()
class UBTService_FindObject_GuardFlag : public UBTService_FindObject
{
	GENERATED_BODY()

public:
	UBTService_FindObject_GuardFlag();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject_GuardFlag) { return 0; }
