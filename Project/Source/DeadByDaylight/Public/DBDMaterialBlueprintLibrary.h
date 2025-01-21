#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "DBDMaterialBlueprintLibrary.generated.h"

class UMeshComponent;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDMaterialBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void SetVectorParameterValueOnMeshComponent(UMeshComponent* Mesh, FName ParameterName, FLinearColor Value);

	UFUNCTION(BlueprintCallable)
	static void SetTransformParameterValueOnMeshComponent(UMeshComponent* Mesh, FName ParameterName, FTransform Value);

	UFUNCTION(BlueprintCallable)
	static void SetTransformParameterValueOnMaterialDynamic(UMaterialInstanceDynamic* Material, FName ParameterName, FTransform Value);

	UFUNCTION(BlueprintCallable)
	static void SetTransformParameterInverseValueOnMaterialDynamic(UMaterialInstanceDynamic* Material, FName ParameterName, FTransform Value);

	UFUNCTION(BlueprintCallable)
	static TArray<UMaterialInstanceDynamic*> CreateDynamicMaterialInstanceForParticleSystem(UParticleSystemComponent* System);

public:
	UDBDMaterialBlueprintLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UDBDMaterialBlueprintLibrary) { return 0; }
