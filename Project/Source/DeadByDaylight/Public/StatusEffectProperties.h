#pragma once

#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "EExternalEffectSource.h"
#include "ItemData.h"
#include "UObject/SoftObjectPtr.h"
#include "StatusEffectProperties.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectProperties: public FItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UStatusEffect> StatusEffectBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EExternalEffectSource ExternalEffectSource;

public:
	DEADBYDAYLIGHT_API FStatusEffectProperties();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectProperties) { return 0; }
