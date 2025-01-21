#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "RichTextBlockImageSharedSizeDecorator.generated.h"

UCLASS(BlueprintType)
class URichTextBlockImageSharedSizeDecorator : public URichTextBlockImageDecorator
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Height;

public:
	URichTextBlockImageSharedSizeDecorator();
};

FORCEINLINE uint32 GetTypeHash(const URichTextBlockImageSharedSizeDecorator) { return 0; }
