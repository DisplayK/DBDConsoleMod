#include "PathBuilder_EvadeLoop.h"

UPathBuilder_EvadeLoop::UPathBuilder_EvadeLoop()
{
	this->AddDistanceToRequiredEvadeGap = 400.000000;
	this->ForceEvadePointUnderDistance = 600.000000;
	this->ChaserCrossingEvadeTimePenalty = 1.200000;
	this->SwapPathReachTimeBuffer = 1.000000;
	this->BreakPalletInteractionId = TEXT("Destroy");
	this->OnPathRadius = 150.000000;
	this->MaxEvadeInteractableWeightDistance = 6400.000000;
	this->WeightAtMaxDistance = 1.000000;
	this->MaxWeightAtNearestDistanceIfHostileHasRangedAbility = true;
	this->WeightAtMaxSafety = 1.000000;
	this->MaxNearAllyPenaltyPathPointDistance = 1600.000000;
	this->WeightWhenNearAlly = -1.000000;
	this->_originalEvadeLoopWorkPath = NULL;
	this->_querierWorkPathA = NULL;
	this->_querierWorkPathB = NULL;
	this->_chaserWorkPath = NULL;
	this->_pickedEvadeLoopComponent = NULL;
}
