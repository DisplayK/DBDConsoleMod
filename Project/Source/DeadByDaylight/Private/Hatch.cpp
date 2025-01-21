#include "Hatch.h"
#include "EHatchState.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void AHatch::OnRep_HatchState(EHatchState oldState)
{

}

void AHatch::OnHatchStateUnhidden()
{

}

bool AHatch::IsOpen() const
{
	return false;
}

EHatchState AHatch::GetHatchState() const
{
	return EHatchState::Hidden;
}

void AHatch::Authority_SetIsForceOpen(bool isForcedOpen)
{

}

void AHatch::Authority_SetHatchState(EHatchState newState)
{

}

void AHatch::Authority_ResetTimer(float duration)
{

}

void AHatch::Authority_OnSurvivorsLeftChanged(int32 survivorRemaining)
{

}

void AHatch::Authority_OnHatchVisibilityChanged(bool isVisible)
{

}

void AHatch::Authority_OnEndGameOver(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void AHatch::Authority_OnCloseTimerComplete()
{

}

void AHatch::Authority_CheckedOpenHatch()
{

}

void AHatch::Authority_CheckedOpenForceClosedHatch()
{

}

void AHatch::Authority_CheckedCloseHatch()
{

}

void AHatch::Authority_CheckedChangeActiveState()
{

}

void AHatch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AHatch, _hatchState);
}

AHatch::AHatch()
{
	this->_hatchState = EHatchState::Hidden;
	this->_isEndGameOver = false;
	this->_isForceOpen = false;
	this->_attemptToCloseHatchOnNextEscape = false;
	this->_baseCollision = NULL;
}
