#include "CharacterPusherComponent.h"

class UBasePushStrategyComponent;
class ACharacter;
class UPrimitiveComponent;
class AActor;
class UCapsuleComponent;

void UCharacterPusherComponent::SetIgnoredCharacter(ACharacter* character, const bool ignore)
{

}

void UCharacterPusherComponent::OnCharacterDetectorOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void UCharacterPusherComponent::Construct(UCapsuleComponent* characterDetector, UCapsuleComponent* characterCollision, UBasePushStrategyComponent* pushStrategy)
{

}

UCharacterPusherComponent::UCharacterPusherComponent()
{
	this->_charactersToPush = TArray<ACharacter*>();
	this->_ignoredCharacters = TSet<ACharacter*>();
	this->_characterDetector = NULL;
	this->_characterCollision = NULL;
	this->_pushStrategy = NULL;
	this->_ignoredByPushedCharacters = TArray<ACharacter*>();
}
