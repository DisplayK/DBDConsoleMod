#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "RichTextBlockScalableImageDecorator.generated.h"

UCLASS()
class URichTextBlockScalableImageDecorator : public URichTextBlockImageDecorator
{
	GENERATED_BODY()

public:
	URichTextBlockScalableImageDecorator();
};

FORCEINLINE uint32 GetTypeHash(const URichTextBlockScalableImageDecorator) { return 0; }
