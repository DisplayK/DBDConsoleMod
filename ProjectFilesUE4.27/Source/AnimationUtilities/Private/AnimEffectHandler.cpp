#include "AnimEffectHandler.h"

class AActor;

bool UAnimEffectHandler::HandleAnimNotify_Implementation(AActor* player, const FName& notifyName) const
{
	return false;
}

UAnimEffectHandler::UAnimEffectHandler()
{

}
