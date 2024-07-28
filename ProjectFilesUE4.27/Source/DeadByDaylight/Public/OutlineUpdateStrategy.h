#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OutlineUpdateStrategy.generated.h"

class UDBDOutlineComponent;

UCLASS(BlueprintType, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOutlineUpdateStrategy : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

public:
	UOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UOutlineUpdateStrategy) { return 0; }
