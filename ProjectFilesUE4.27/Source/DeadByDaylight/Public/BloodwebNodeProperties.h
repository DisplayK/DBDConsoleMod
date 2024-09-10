#pragma once

#include "CoreMinimal.h"
#include "EBloodwebNodeContentType.h"
#include "EItemRarity.h"
#include "BloodwebNodeProperties.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebNodeProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBloodwebNodeContentType ContentType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

public:
	DEADBYDAYLIGHT_API FBloodwebNodeProperties();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebNodeProperties) { return 0; }
