#pragma once

#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "SecondaryInteractionProperties.generated.h"

USTRUCT(BlueprintType)
struct FSecondaryInteractionProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString SecondaryInteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EInputInteractionType SecondaryInteractionInputType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText SecondaryInteractionDescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool ShouldShow;

public:
	DEADBYDAYLIGHT_API FSecondaryInteractionProperties();
};

FORCEINLINE uint32 GetTypeHash(const FSecondaryInteractionProperties) { return 0; }
