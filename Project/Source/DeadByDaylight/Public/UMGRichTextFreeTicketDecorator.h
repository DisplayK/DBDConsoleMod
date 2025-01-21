#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextFreeTicketImageInfo.h"
#include "RichTextFreeTicketTextInfo.h"
#include "UMGRichTextFreeTicketDecorator.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class UUMGRichTextFreeTicketDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FVector2D FreeTicketOverrideSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRichTextFreeTicketImageInfo FreeTicketIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRichTextFreeTicketImageInfo FreeTicketBG;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FRichTextFreeTicketTextInfo FreeTicketDurationTitle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FRichTextFreeTicketTextInfo FreeTicketTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRichTextFreeTicketTextInfo FreeTicketDurationInHours;

protected:
	UPROPERTY(EditAnywhere)
	UDataTable* TitleStyleSet;

public:
	UUMGRichTextFreeTicketDecorator();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRichTextFreeTicketDecorator) { return 0; }
