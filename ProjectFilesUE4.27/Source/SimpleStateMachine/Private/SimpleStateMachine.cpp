#include "SimpleStateMachine.h"

USimpleStateMachine::USimpleStateMachine()
{
	this->_defaultStateClass = NULL;
	this->_stateClasses = TSet<TSubclassOf<USimpleStateMachineBaseState>>();
	this->_transitionsClasses = TSet<TSubclassOf<USimpleStateMachineBaseTransition>>();
	this->_defaultState = NULL;
	this->_currentState = NULL;
	this->_states = TMap<FName, USimpleStateMachineBaseState*>();
	this->_debugPrintState = false;
}
