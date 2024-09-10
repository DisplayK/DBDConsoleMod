#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Chaos/ChaosEngineInterface.h"
#include "DBDSurfaceTypeName.generated.h"

class UPhysicalMaterial;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDSurfaceTypeName : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static TEnumAsByte<EPhysicalSurface> GetSurfaceType(const UPhysicalMaterial* physicalMaterial);

	UFUNCTION(BlueprintPure)
	static FString GetSurfaceName(const UPhysicalMaterial* physicalMaterial);

	UFUNCTION(BlueprintPure)
	static FName ConvertFromPhysicalMaterial(const UPhysicalMaterial* material);

	UFUNCTION(BlueprintPure)
	static FName Convert(const TEnumAsByte<EPhysicalSurface> surfaceType);

public:
	UDBDSurfaceTypeName();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSurfaceTypeName) { return 0; }
