#include "SingleModifierCondition.h"
#include "Net/UnrealNetwork.h"

void USingleModifierCondition::OnRep_Condition()
{

}

void USingleModifierCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USingleModifierCondition, _condition);
}

USingleModifierCondition::USingleModifierCondition()
{
	this->_condition = NULL;
}
