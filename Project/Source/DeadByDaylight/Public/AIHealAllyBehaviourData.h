#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AIHealAllyBehaviourData.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType)
class UAIHealAllyBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACamperPlayer* _targetAlly;

public:
	UFUNCTION(BlueprintCallable)
	void Init(ACamperPlayer* allyToHealTarget);

public:
	UAIHealAllyBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAIHealAllyBehaviourData) { return 0; }
