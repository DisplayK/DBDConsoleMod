#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "CharacterDescriptionOverride.generated.h"

class ADBDMenuPlayer;
class UTexture2D;
class ADBDPlayer;

USTRUCT(BlueprintType)
struct FCharacterDescriptionOverride: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> RequiredItemIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayNameOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> HudIconOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<ADBDMenuPlayer> MenuBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<ADBDPlayer> GameBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName IconFilePathOverride;

public:
	DEADBYDAYLIGHT_API FCharacterDescriptionOverride();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterDescriptionOverride) { return 0; }
