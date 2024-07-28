#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "InputPromptDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInputPromptDataRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FText InputLabel;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FKey InputKey;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UTexture2D* PromptTexture;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool ShowLabel;

public:
	DBDUIVIEWSCORE_API FInputPromptDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FInputPromptDataRow) { return 0; }
