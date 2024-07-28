#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GeneratorEntityAnimInstance.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UGeneratorEntityAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool IsCorrupted;

	UPROPERTY(BlueprintReadWrite)
	bool IsCorrupted_End;

	UPROPERTY(BlueprintReadOnly)
	bool IsUncorrupted;

	UPROPERTY(BlueprintReadWrite)
	bool IsUncorrupted_End;

public:
	UGeneratorEntityAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorEntityAnimInstance) { return 0; }
