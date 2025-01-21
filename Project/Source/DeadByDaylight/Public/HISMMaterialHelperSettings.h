#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/SoftObjectPtr.h"
#include "HISMMaterialHelperSettings.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class UStaticMesh;

UCLASS()
class UHISMMaterialHelperSettings : public UDataAsset
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TMap<UStaticMesh*, TSoftClassPtr<UHierarchicalInstancedStaticMeshComponent>> _meshMaterialOverride;

public:
	UHISMMaterialHelperSettings();
};

FORCEINLINE uint32 GetTypeHash(const UHISMMaterialHelperSettings) { return 0; }
