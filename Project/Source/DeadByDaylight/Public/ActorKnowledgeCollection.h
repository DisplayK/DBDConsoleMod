#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EKnowledgeSharingType.h"
#include "ActorKnowledgeCollection.generated.h"

class AActor;
class ACharacter;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorKnowledgeCollection : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_Actors, Transient)
	TArray<AActor*> _actors;

	UPROPERTY(Transient)
	TArray<AActor*> _previousActors;

	UPROPERTY(Replicated, Transient)
	bool _available;

	UPROPERTY(Replicated, Transient)
	ACharacter* _possessor;

	UPROPERTY(Replicated, Transient)
	EKnowledgeSharingType _sharing;

private:
	UFUNCTION()
	void OnRep_Actors();

public:
	UFUNCTION(BlueprintCallable)
	void Local_SetAvailable(bool value);

	UFUNCTION(BlueprintPure)
	bool IsAvailable(const ACharacter* character) const;

	UFUNCTION(BlueprintPure)
	bool Contains(AActor* actor) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetSharingType(EKnowledgeSharingType value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetPossessor(ACharacter* possessor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetAvailable(bool value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Remove(AActor* actor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Empty();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Append(const TArray<AActor*>& actors);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_Add(AActor* actor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UActorKnowledgeCollection();
};

FORCEINLINE uint32 GetTypeHash(const UActorKnowledgeCollection) { return 0; }
