#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "EEmblemEvaluation.h"
#include "EmblemProgressionID.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDEmblemDefinition.generated.h"

class UDBDEmblem;

USTRUCT(BlueprintType)
struct FDBDEmblemDefinition: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPlayerRole> Roles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UDBDEmblem> CustomEmblem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> IconFilePaths;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEmblemEvaluation EmblemEvaluation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEmblemProgressionID> EmblemProgressionData;

public:
	DEADBYDAYLIGHT_API FDBDEmblemDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FDBDEmblemDefinition) { return 0; }
