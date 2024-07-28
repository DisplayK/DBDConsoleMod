#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TokenProvider.generated.h"

class UTokenCounter;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class DEADBYDAYLIGHT_API UTokenProvider : public UInterface
{
	GENERATED_BODY()
};

class DEADBYDAYLIGHT_API ITokenProvider : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	virtual UTokenCounter* GetTokenProvider() const PURE_VIRTUAL(GetTokenProvider, return NULL;);

};
