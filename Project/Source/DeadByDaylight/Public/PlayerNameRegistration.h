#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerNameRegistration.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPlayerNameRegistration : public UObject
{
	GENERATED_BODY()

public:
	UPlayerNameRegistration();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerNameRegistration) { return 0; }
