#include "DrawPatrolPathInteraction.h"

class AInteractable;

void UDrawPatrolPathInteraction::SetIsCharging(bool isCharging)
{

}

void UDrawPatrolPathInteraction::Server_StartPatrol_Implementation()
{

}

void UDrawPatrolPathInteraction::Server_SendOrder_Implementation(AInteractable* target)
{

}

void UDrawPatrolPathInteraction::OnCancellationTimerCompleted()
{

}

bool UDrawPatrolPathInteraction::IsCharging() const
{
	return false;
}

bool UDrawPatrolPathInteraction::IsChargeCompleted() const
{
	return false;
}

UDrawPatrolPathInteraction::UDrawPatrolPathInteraction()
{
	this->_postPowerHasteClass = NULL;
	this->_hasteDurationByPathLength = NULL;
}
