#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "ElementSubstitutions.h"
#include "SubstitutionElements.h"
#include "GameplayElementSubstitutions.generated.h"

USTRUCT(BlueprintType)
struct FGameplayElementSubstitutions: public FElementSubstitutions
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<FSubstitutionElements> _replacements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	EGameplayElementType _type;

public:
	DEADBYDAYLIGHT_API FGameplayElementSubstitutions();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayElementSubstitutions) { return 0; }
