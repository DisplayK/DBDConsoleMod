#include "FSM_Transition.h"

UFSM_Transition::UFSM_Transition()
{
	this->_transitionName = NAME_None;
	this->_transitionStateClass = NULL;
	this->_conditions = TArray<UFSM_Condition*>();
}
