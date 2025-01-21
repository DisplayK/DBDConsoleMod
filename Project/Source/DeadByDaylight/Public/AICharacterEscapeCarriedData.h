#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AICharacterEscapeCarriedData.generated.h"

UCLASS(BlueprintType)
class UAICharacterEscapeCarriedData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _preventWiggleSuccess;

public:
	UFUNCTION(BlueprintCallable)
	void Init(bool preventWiggleSuccess);

public:
	UAICharacterEscapeCarriedData();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterEscapeCarriedData) { return 0; }
