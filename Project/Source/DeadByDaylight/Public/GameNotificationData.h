#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPromptType.h"
#include "EPromptPriority.h"
#include "GameNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FGameNotificationData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPromptType PromptType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPromptPriority Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Content;

public:
	DEADBYDAYLIGHT_API FGameNotificationData();
};

FORCEINLINE uint32 GetTypeHash(const FGameNotificationData) { return 0; }
