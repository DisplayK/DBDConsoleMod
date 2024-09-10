#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MeatHookEntityVisibilityComponent.generated.h"

class AEntity;

UCLASS(meta=(BlueprintSpawnableComponent))
class UMeatHookEntityVisibilityComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AEntity* _entity;

	UPROPERTY(EditAnywhere)
	float _entityReappearSpeed;

	UPROPERTY(EditAnywhere)
	float _entityDisappearSpeed;

public:
	UMeatHookEntityVisibilityComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMeatHookEntityVisibilityComponent) { return 0; }
