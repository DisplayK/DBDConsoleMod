#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "MenuCharacterUIData.generated.h"

USTRUCT(BlueprintType)
struct FMenuCharacterUIData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector offsetMainMenuForwardPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector offsetMainMenuBackwardPosition;

public:
	DEADBYDAYLIGHT_API FMenuCharacterUIData();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCharacterUIData) { return 0; }
