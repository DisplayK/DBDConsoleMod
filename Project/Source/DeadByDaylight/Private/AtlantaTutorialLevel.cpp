#include "AtlantaTutorialLevel.h"

class APlayerController;
class ADBDAIPlayerController;
class AActor;
class ADBDPlayer;

void AAtlantaTutorialLevel::StartCameraFadeIn()
{

}

void AAtlantaTutorialLevel::SetTutorialElement(const FString& elementKey, AActor* elementToSet)
{

}

void AAtlantaTutorialLevel::SetLocallyControlledPlayer(ADBDPlayer* locallyControllerPlayer)
{

}

void AAtlantaTutorialLevel::SetAIEscapePoints(TArray<AActor*> escapePoints)
{

}

void AAtlantaTutorialLevel::OnTriggerBeginOverlapActor(const FString& triggerID, AActor* overlappingActor)
{

}

bool AAtlantaTutorialLevel::IsActorInLineOfSight(ADBDAIPlayerController* aiPlayerController, APlayerController* playerController)
{
	return false;
}

void AAtlantaTutorialLevel::HandleCanStartTutorialChanged(bool canStartTutorial)
{

}

AActor* AAtlantaTutorialLevel::GetTutorialElement(const FString& elementKey) const
{
	return NULL;
}

AAtlantaTutorialLevel::AAtlantaTutorialLevel()
{

}
