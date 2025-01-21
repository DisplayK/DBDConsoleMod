#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaFreeTicketAffectedUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaFreeTicketAffectedUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FString InEffectBGFilePath;

	UPROPERTY(BlueprintReadOnly)
	FName Id;

	UPROPERTY()
	FDateTime EndDate;

	UPROPERTY()
	bool HasFreeTicketToUse;

public:
	DEADBYDAYLIGHT_API FAtlantaFreeTicketAffectedUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaFreeTicketAffectedUIData) { return 0; }
