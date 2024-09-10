#pragma once

#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "RichTextFreeTicketImageInfo.generated.h"

USTRUCT(BlueprintType)
struct FRichTextFreeTicketImageInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FMargin Padding;

public:
	DEADBYDAYLIGHT_API FRichTextFreeTicketImageInfo();
};

FORCEINLINE uint32 GetTypeHash(const FRichTextFreeTicketImageInfo) { return 0; }
