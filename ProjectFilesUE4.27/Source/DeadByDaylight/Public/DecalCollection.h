#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DecalCollection.generated.h"

class UDecalMaskedMaterialsList;
class UStaticMeshComponent;
class UDBDDecalComponent;

UCLASS()
class DEADBYDAYLIGHT_API UDecalCollection : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UDBDDecalComponent*> _decalComponentsArray;

	UPROPERTY(Transient, Export)
	TSet<UDBDDecalComponent*> _activeDecalComponents;

	UPROPERTY(Transient, Export)
	TSet<UDBDDecalComponent*> _inactiveDecalComponents;

	UPROPERTY(Transient)
	TArray<bool> _DeltaZPool;

	UPROPERTY(Transient)
	TMap<UStaticMeshComponent*, int32> _deltaZMultipliers;

	UPROPERTY(Transient)
	UDecalMaskedMaterialsList* _decalProperties;

public:
	UDecalCollection();
};

FORCEINLINE uint32 GetTypeHash(const UDecalCollection) { return 0; }
