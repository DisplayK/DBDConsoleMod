#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "UMGHtmlRichText.generated.h"

UCLASS()
class UUMGHtmlRichText : public URichTextBlock
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetHtmlText(const FString& InText);

public:
	UUMGHtmlRichText();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHtmlRichText) { return 0; }
