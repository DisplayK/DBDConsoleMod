#pragma once

#include "CoreMinimal.h"
#include "DBDPlayerTotemPair.generated.h"

class ADBDPlayer;
class ATotem;

USTRUCT(BlueprintType)
struct FDBDPlayerTotemPair
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	ADBDPlayer* Player;

	UPROPERTY(Transient)
	ATotem* Totem;

public:
	THEK25_API FDBDPlayerTotemPair();
};

FORCEINLINE uint32 GetTypeHash(const FDBDPlayerTotemPair) { return 0; }
