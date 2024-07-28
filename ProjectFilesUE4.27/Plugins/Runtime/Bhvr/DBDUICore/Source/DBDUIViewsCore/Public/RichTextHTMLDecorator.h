#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextHTMLDecorator.generated.h"

UCLASS()
class DBDUIVIEWSCORE_API URichTextHTMLDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

public:
	URichTextHTMLDecorator();
};

FORCEINLINE uint32 GetTypeHash(const URichTextHTMLDecorator) { return 0; }
