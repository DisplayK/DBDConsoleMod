#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "ContaminationSerumCollectable.generated.h"

UCLASS()
class AContaminationSerumCollectable : public ABaseCamperCollectable
{
	GENERATED_BODY()

public:
	AContaminationSerumCollectable();
};

FORCEINLINE uint32 GetTypeHash(const AContaminationSerumCollectable) { return 0; }
