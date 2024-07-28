#pragma once

#include "CoreMinimal.h"
#include "HasObjectState.h"
#include "HasObjectStateWithMaxDuration.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UHasObjectStateWithMaxDuration : public UHasObjectState
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _maxDuration;

public:
	UFUNCTION(BlueprintCallable)
	void SetMaxDuration(float duration);

public:
	UHasObjectStateWithMaxDuration();
};

FORCEINLINE uint32 GetTypeHash(const UHasObjectStateWithMaxDuration) { return 0; }
