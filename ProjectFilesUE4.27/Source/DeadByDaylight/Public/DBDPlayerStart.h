#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "DBDPlayerStart.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerStart : public APlayerStart
{
	GENERATED_BODY()

public:
	ADBDPlayerStart();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerStart) { return 0; }
