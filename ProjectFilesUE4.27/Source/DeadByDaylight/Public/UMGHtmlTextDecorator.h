#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "UMGHtmlTextDecorator.generated.h"

UCLASS()
class UUMGHtmlTextDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

public:
	UUMGHtmlTextDecorator();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHtmlTextDecorator) { return 0; }
