#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "WakerObject.generated.h"

class UPrimitiveComponent;
class ADBDPlayer;
class UCamperDreamworldComponent;

UCLASS()
class DEADBYDAYLIGHT_API AWakerObject : public AInteractable, public IAIInteractableTargetInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_LinkedCamperChanged, Transient, Export)
	UCamperDreamworldComponent* _linkedCamperDreamworldComponent;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool IsInteracting;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _chargeComplete;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisibilityAndOutline();

public:
	UFUNCTION(BlueprintCallable)
	void SetChargeComplete(bool complete);

protected:
	UFUNCTION()
	void OnRep_LinkedCamperChanged(UCamperDreamworldComponent* previous);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnNewLinkedCamper(UCamperDreamworldComponent* dreamworldComponent);

protected:
	UFUNCTION()
	void OnLinkedCamperDreamStateChanged(bool isInDreamworld, bool locallyObservedChanged);

	UFUNCTION()
	void OnAnyCamperDreamStateChanged(bool isInDreamworld, bool locallyObservedChanged);

public:
	UFUNCTION()
	void LinkCampersOnLevelReadyToPlay();

	UFUNCTION(BlueprintPure)
	bool IsLinkedToCamper(const ADBDPlayer* camper) const;

	UFUNCTION(BlueprintPure)
	bool HasLinkedCamper() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInteracting() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UPrimitiveComponent* GetInteractorPrimitiveComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetInteractionPercentComplete() const;

	UFUNCTION(BlueprintPure)
	bool GetChargeComplete() const;

	UFUNCTION(BlueprintPure)
	bool CanWakeUpCamper(const ADBDPlayer* camper) const;

	UFUNCTION()
	void BindToCamperDreamStateChanged(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AWakerObject();
};

FORCEINLINE uint32 GetTypeHash(const AWakerObject) { return 0; }
