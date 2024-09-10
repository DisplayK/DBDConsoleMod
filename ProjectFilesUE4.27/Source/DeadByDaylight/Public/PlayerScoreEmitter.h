#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerScoreEmitter.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UPlayerScoreEmitter : public UObject
{
	GENERATED_BODY()

public:
	UPlayerScoreEmitter();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerScoreEmitter) { return 0; }
