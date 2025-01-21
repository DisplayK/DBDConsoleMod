#include "SurvivorCosmeticHelperActor.h"

class UAkComponent;
class UCustomizedSkeletalMesh;
class ACamperPlayer;
class UMaterialHelper;

bool ASurvivorCosmeticHelperActor::IsLocallyObserved() const
{
	return false;
}

ACamperPlayer* ASurvivorCosmeticHelperActor::GetSurvivor() const
{
	return NULL;
}

UMaterialHelper* ASurvivorCosmeticHelperActor::GetMaterialHelper() const
{
	return NULL;
}

UCustomizedSkeletalMesh* ASurvivorCosmeticHelperActor::GetCustomizedSkeletalMesh() const
{
	return NULL;
}

UAkComponent* ASurvivorCosmeticHelperActor::GetAudioComponent() const
{
	return NULL;
}

ASurvivorCosmeticHelperActor::ASurvivorCosmeticHelperActor()
{

}
