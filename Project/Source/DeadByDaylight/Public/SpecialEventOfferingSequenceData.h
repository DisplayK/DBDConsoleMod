#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "SpecialEventOfferingSequenceData.generated.h"

class AOfferingSequenceManager;
class AOfferingCard;

USTRUCT(BlueprintType)
struct FSpecialEventOfferingSequenceData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<AOfferingCard> CardClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<AOfferingSequenceManager> ManagerClass;

public:
	DEADBYDAYLIGHT_API FSpecialEventOfferingSequenceData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventOfferingSequenceData) { return 0; }
