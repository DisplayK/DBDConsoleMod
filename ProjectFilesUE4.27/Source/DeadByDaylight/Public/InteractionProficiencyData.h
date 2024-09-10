#pragma once

#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "InteractionProficiencyData.generated.h"

USTRUCT(BlueprintType)
struct FInteractionProficiencyData
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType ProficiencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

public:
	DEADBYDAYLIGHT_API FInteractionProficiencyData();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionProficiencyData) { return 0; }
