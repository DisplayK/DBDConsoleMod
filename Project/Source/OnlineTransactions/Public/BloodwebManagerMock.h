#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebManagerMock.generated.h"

UCLASS()
class UBloodwebManagerMock : public UObject
{
	GENERATED_BODY()

public:
	UBloodwebManagerMock();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebManagerMock) { return 0; }
