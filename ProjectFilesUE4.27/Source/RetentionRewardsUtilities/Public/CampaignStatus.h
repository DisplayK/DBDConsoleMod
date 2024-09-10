#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CampaignStatus.generated.h"

USTRUCT()
struct FCampaignStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	bool IsValid;

	UPROPERTY(Transient)
	FDateTime StartDate;

	UPROPERTY(Transient)
	FDateTime EndDate;

public:
	RETENTIONREWARDSUTILITIES_API FCampaignStatus();
};

FORCEINLINE uint32 GetTypeHash(const FCampaignStatus) { return 0; }
