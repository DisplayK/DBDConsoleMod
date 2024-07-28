#pragma once

#include "CoreMinimal.h"
#include "OfferingEffect.h"
#include "ItemData.h"
#include "EOfferingType.h"
#include "OfferingProperties.generated.h"

USTRUCT(BlueprintType)
struct FOfferingProperties: public FItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOfferingType OfferingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOfferingEffect> Effects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BigIconFilePath;

public:
	DEADBYDAYLIGHT_API FOfferingProperties();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingProperties) { return 0; }
