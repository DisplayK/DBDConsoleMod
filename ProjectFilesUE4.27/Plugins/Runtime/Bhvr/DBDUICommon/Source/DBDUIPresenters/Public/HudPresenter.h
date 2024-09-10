#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "EHudParentContainerType.h"
#include "HudPresenter.generated.h"

class ADBDPlayer;
class ADBDSpectator;
class APawn;

UCLASS(Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UHudPresenter : public UPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	EHudParentContainerType HudParentContainer;

private:
	UPROPERTY(Transient)
	ADBDPlayer* _presentedCharacter;

	UPROPERTY(Transient)
	ADBDPlayer* _pendingCharacter;

	UPROPERTY(Transient)
	ADBDSpectator* _spectatorPawn;

private:
	UFUNCTION()
	void OnPawnUnpossessed(APawn* pawn);

	UFUNCTION()
	void OnPawnPossessed(APawn* pawn);

	UFUNCTION()
	void OnLocallyObservedChanged();

	UFUNCTION()
	bool IsPendingPawnReady() const;

	UFUNCTION()
	bool IsHudReady() const;

public:
	UHudPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudPresenter) { return 0; }
