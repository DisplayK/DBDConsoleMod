#include "AuthoritativeMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

void UAuthoritativeMovementComponent::SetPawnDetector(UCapsuleComponent* pawnDetector)
{

}

void UAuthoritativeMovementComponent::OnRep_AuthoritativeIgnoreOverlapCharacters()
{

}

void UAuthoritativeMovementComponent::OnPawnDetectorOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

void UAuthoritativeMovementComponent::OnPawnDetectorOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void UAuthoritativeMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAuthoritativeMovementComponent, _authoritativeIgnoreOverlapCharacters);
}

UAuthoritativeMovementComponent::UAuthoritativeMovementComponent()
{
	this->_charactersToPush = TArray<ACharacter*>();
	this->_stopIgnoreCharacterOnEndOverlap = TArray<ACharacter*>();
	this->_pawnDetector = NULL;
	this->_authoritativeIgnoreOverlapCharacters = TArray<ACharacter*>();
	this->_previousAuthoritativeIgnoreOverlapCharacters = TArray<ACharacter*>();
}
