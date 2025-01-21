#pragma once

#include "CoreMinimal.h"
#include "InteractionEndedEvent.h"
#include "Interactable.h"
#include "IsInteractingChangedEvent.h"
#include "RespawnableInteractable.generated.h"

UCLASS()
class SPECIALEVENTUTILITIES_API ARespawnableInteractable : public AInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FInteractionEndedEvent OnInteractionEnded;

	UPROPERTY(BlueprintAssignable)
	FIsInteractingChangedEvent OnIsInteractingChanged;

protected:
	UPROPERTY(ReplicatedUsing=OnRep_IsHidden, Transient)
	bool _isHidden;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnUnhidden();

private:
	UFUNCTION()
	void OnRep_IsHidden();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnHidden();

private:
	UFUNCTION(BlueprintPure)
	bool IsHidden() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ARespawnableInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ARespawnableInteractable) { return 0; }
