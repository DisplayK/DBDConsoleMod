#pragma once

#include "CoreMinimal.h"
#include "ECharacterToolItemType.h"
#include "CharacterToolItemData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterToolItemData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ECharacterToolItemType _type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _id;

public:
	DEADBYDAYLIGHT_API FCharacterToolItemData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterToolItemData) { return 0; }
