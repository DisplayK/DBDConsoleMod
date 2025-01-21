#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "InteractionProficiencyProperties.generated.h"

class UInteractionProficiency;

USTRUCT(BlueprintType)
struct FInteractionProficiencyProperties: public FDBDTableRowBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName ProficiencyID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<UInteractionProficiency> ProficiencyBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<float> BuffLevelThresholds;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<float> DebuffLevelThresholds;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool HasLevels;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString IconFilePath;

public:
	DEADBYDAYLIGHT_API FInteractionProficiencyProperties();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionProficiencyProperties) { return 0; }
