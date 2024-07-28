#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "TestCollectable.generated.h"

class ADBDPlayer;

UCLASS()
class ATestCollectable : public ACollectable
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCollectorSetBPDelegate, ADBDPlayer*, player);

public:
	ATestCollectable();
};

FORCEINLINE uint32 GetTypeHash(const ATestCollectable) { return 0; }
