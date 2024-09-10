#include "ChargeStrategy.h"

UChargeStrategy::UChargeStrategy()
{
	this->_shouldApplyRedirectedChargeNormally = false;
	this->_shouldBroadcastChargeApplied = false;
	this->_shouldApplyModifiersToRedirectedCharge = true;
	this->_shouldAllowChargeFromItem = true;
	this->_shouldRedirectSkillcheckChargePenalty = false;
}
