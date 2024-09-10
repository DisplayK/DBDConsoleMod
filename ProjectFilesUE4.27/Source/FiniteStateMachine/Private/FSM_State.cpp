#include "FSM_State.h"

UFSM_State::UFSM_State()
{
	this->_stateName = NAME_None;
	this->_shouldTick = false;
	this->_defaultChildStateClass = NULL;
	this->_transitions = TArray<UFSM_Transition*>();
	this->_stateMachine = NULL;
	this->_parentState = NULL;
	this->_currentChildState = NULL;
	this->_startTimestamp = 0.000000;
}
