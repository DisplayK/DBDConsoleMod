#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "EPlayerRole.h"
#include "ArchiveNodeDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArchiveNodeDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName CinematicId;

public:
	DEADBYDAYLIGHT_API FArchiveNodeDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveNodeDefinition) { return 0; }
