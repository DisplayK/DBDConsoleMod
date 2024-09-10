#include "DBDMaterialBlueprintLibrary.h"
#include "UObject/NoExportTypes.h"

class UMeshComponent;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;

void UDBDMaterialBlueprintLibrary::SetVectorParameterValueOnMeshComponent(UMeshComponent* Mesh, FName ParameterName, FLinearColor Value)
{

}

void UDBDMaterialBlueprintLibrary::SetTransformParameterValueOnMeshComponent(UMeshComponent* Mesh, FName ParameterName, FTransform Value)
{

}

void UDBDMaterialBlueprintLibrary::SetTransformParameterValueOnMaterialDynamic(UMaterialInstanceDynamic* Material, FName ParameterName, FTransform Value)
{

}

void UDBDMaterialBlueprintLibrary::SetTransformParameterInverseValueOnMaterialDynamic(UMaterialInstanceDynamic* Material, FName ParameterName, FTransform Value)
{

}

TArray<UMaterialInstanceDynamic*> UDBDMaterialBlueprintLibrary::CreateDynamicMaterialInstanceForParticleSystem(UParticleSystemComponent* System)
{
	return TArray<UMaterialInstanceDynamic*>();
}

UDBDMaterialBlueprintLibrary::UDBDMaterialBlueprintLibrary()
{

}
