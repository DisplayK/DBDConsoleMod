#include "DBDAIPlayerController.h"

class AActor;
class UAICharacterBehaviourData;
class UAICharacterBehaviour;

void ADBDAIPlayerController::StopCharacterBehaviour(const UClass* behaviourClass)
{

}

void ADBDAIPlayerController::StopAllCharacterBehaviours()
{

}

void ADBDAIPlayerController::StartCharacterBehaviour(UClass* behaviourClass, UAICharacterBehaviourData* characterBehaviourData)
{

}

void ADBDAIPlayerController::ResumeCharacterBehaviour(const UClass* behaviourClass)
{

}

void ADBDAIPlayerController::PauseCharacterBehaviour(const UClass* behaviourClass)
{

}

void ADBDAIPlayerController::OnBehaviourEndedHandler(UAICharacterBehaviour* behaviourEnded)
{

}

void ADBDAIPlayerController::MovePlayerToActor(AActor* goal, float acceptanceRadius)
{

}

ADBDAIPlayerController::ADBDAIPlayerController()
{
	this->_currentBehaviours = TArray<UAICharacterBehaviour*>();
}
