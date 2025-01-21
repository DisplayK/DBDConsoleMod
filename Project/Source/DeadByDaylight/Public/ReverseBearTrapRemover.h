#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "ReverseBearTrapRemover.generated.h"

class AReverseBearTrap;
class UPrimitiveComponent;
class AActor;
class UMapActorComponent;

UCLASS()
class DEADBYDAYLIGHT_API AReverseBearTrapRemover : public AInteractable, public IAIInteractableTargetInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	TArray<int32> _keys;

	UPROPERTY(Replicated)
	TArray<int32> _keysSearched;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UMapActorComponent* _mapActor;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayRemoveFailMontage();

	UFUNCTION(BlueprintPure)
	bool HasSearchedForKey(int32 keyId) const;

	UFUNCTION(BlueprintPure)
	bool HasKey(int32 keyId) const;

	UFUNCTION(BlueprintPure)
	UMapActorComponent* GetMapActor() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UPrimitiveComponent* GetInteractorPrimitiveComponent() const;

protected:
	UFUNCTION(BlueprintPure)
	AReverseBearTrap* GetAttachedRBT(AActor* player) const;

public:
	UFUNCTION(BlueprintCallable)
	void AddSearchedKey(int32 keyId);

	UFUNCTION(BlueprintCallable)
	void AddKey(int32 keyId);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AReverseBearTrapRemover();
};

FORCEINLINE uint32 GetTypeHash(const AReverseBearTrapRemover) { return 0; }
