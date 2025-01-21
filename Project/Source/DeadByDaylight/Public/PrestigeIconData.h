#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "PrestigeIconData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPrestigeIconData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrestigeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Icon;

public:
	DEADBYDAYLIGHT_API FPrestigeIconData();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeIconData) { return 0; }
