#include "K28IsNightCycleState.h"

void UK28IsNightCycleState::OnLevelReadyToPlay()
{

}

UK28IsNightCycleState::UK28IsNightCycleState()
{
	this->_nightCycleState = EK28NightCycleState::Charging;
}
