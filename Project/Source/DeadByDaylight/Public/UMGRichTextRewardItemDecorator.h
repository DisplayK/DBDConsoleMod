#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "UMGRichTextRewardItemDecorator.generated.h"

class UDataTable;

UCLASS()
class UUMGRichTextRewardItemDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	UDataTable* RewardSet;

public:
	UUMGRichTextRewardItemDecorator();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRichTextRewardItemDecorator) { return 0; }
