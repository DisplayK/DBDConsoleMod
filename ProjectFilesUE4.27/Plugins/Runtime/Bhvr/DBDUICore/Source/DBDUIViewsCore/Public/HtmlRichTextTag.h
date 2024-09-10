#pragma once

#include "CoreMinimal.h"
#include "HtmlRichTextTag.generated.h"

USTRUCT()
struct FHtmlRichTextTag
{
	GENERATED_BODY()

public:
	DBDUIVIEWSCORE_API FHtmlRichTextTag();
};

FORCEINLINE uint32 GetTypeHash(const FHtmlRichTextTag) { return 0; }
