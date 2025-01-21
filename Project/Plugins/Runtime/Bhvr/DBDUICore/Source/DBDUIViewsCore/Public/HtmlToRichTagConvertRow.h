#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HtmlToRichTagConvertRow.generated.h"

USTRUCT()
struct FHtmlToRichTagConvertRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString HtmlTag;

	UPROPERTY(EditAnywhere)
	FString RichTextTag;

public:
	DBDUIVIEWSCORE_API FHtmlToRichTagConvertRow();
};

FORCEINLINE uint32 GetTypeHash(const FHtmlToRichTagConvertRow) { return 0; }
