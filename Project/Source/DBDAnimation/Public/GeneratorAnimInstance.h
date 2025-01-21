#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "GeneratorAnimInstance.generated.h"

class AGenerator;

UCLASS(NonTransient)
class DBDANIMATION_API UGeneratorAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	AGenerator* _owningGenerator;

	UPROPERTY(BlueprintReadWrite)
	bool _rushFailed;

	UPROPERTY(BlueprintReadOnly)
	bool _isActivated;

	UPROPERTY(BlueprintReadOnly)
	float _percentComplete;

public:
	UFUNCTION(BlueprintCallable)
	void SetSkillCheckSuccess(bool success);

public:
	UGeneratorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorAnimInstance) { return 0; }
