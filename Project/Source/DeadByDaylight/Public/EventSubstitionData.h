#pragma once

#include "CoreMinimal.h"
#include "GameplayElementAddition.h"
#include "GameplayElementSubstitutions.h"
#include "DependencyElementSubstitutions.h"
#include "DependencyElementAddition.h"
#include "EventSubstitionData.generated.h"

USTRUCT(BlueprintType)
struct FEventSubstitionData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FName _name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _allowSubstitutionInKYF;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	int32 _baseNumOfSubstitutionPerGroup;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<FGameplayElementSubstitutions> _gameplaySubstitutionElements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<FDependencyElementSubstitutions> _dependencySubstitutionElements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<FDependencyElementAddition> _dependencyElementAdditions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<FGameplayElementAddition> _gameplayElementAdditions;

public:
	DEADBYDAYLIGHT_API FEventSubstitionData();
};

FORCEINLINE uint32 GetTypeHash(const FEventSubstitionData) { return 0; }
