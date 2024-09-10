#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightingFactory.generated.h"

class ULightingData;

UCLASS()
class DEADBYDAYLIGHT_API ULightingFactory : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	ULightingData* _data;

public:
	ULightingFactory();
};

FORCEINLINE uint32 GetTypeHash(const ULightingFactory) { return 0; }
