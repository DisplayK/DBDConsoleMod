#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "AuthoritativeActorPoolComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UAuthoritativeActorPoolComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> _actorClass;

	UPROPERTY(EditAnywhere)
	int32 _size;

private:
	UPROPERTY(ReplicatedUsing=OnRep_Pool, Transient)
	TArray<AActor*> _pool;

private:
	UFUNCTION()
	void OnRep_Pool(TArray<AActor*> previousPool);

	UFUNCTION()
	void Authority_OnActorDestroyed(AActor* destroyedActor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAuthoritativeActorPoolComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAuthoritativeActorPoolComponent) { return 0; }
