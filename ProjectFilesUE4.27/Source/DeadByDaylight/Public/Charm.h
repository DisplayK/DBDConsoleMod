#pragma once

#include "CoreMinimal.h"
#include "StandDisplayable.h"
#include "GameFramework/Actor.h"
#include "Charm.generated.h"

class USkeletalMeshComponent;
class AItemVfx;

UCLASS()
class ACharm : public AActor, public IStandDisplayable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _skeletalMeshComponent;

private:
	UPROPERTY(Transient)
	AItemVfx* _actorVfx;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void BeginDestroySequence_Internal();

public:
	ACharm();
};

FORCEINLINE uint32 GetTypeHash(const ACharm) { return 0; }
