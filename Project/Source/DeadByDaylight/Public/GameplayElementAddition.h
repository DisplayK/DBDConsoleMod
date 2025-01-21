#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "UObject/SoftObjectPtr.h"
#include "GameplayElementAddition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGameplayElementAddition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AActor> _elementToAdd;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	EGameplayElementType _spawnerType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	int32 _numberToAdd;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _numberToAddAffectedByOffering;

public:
	DEADBYDAYLIGHT_API FGameplayElementAddition();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayElementAddition) { return 0; }
