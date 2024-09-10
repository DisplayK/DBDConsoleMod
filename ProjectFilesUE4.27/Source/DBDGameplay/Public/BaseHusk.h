#pragma once

#include "CoreMinimal.h"
#include "BaseVFX.h"
#include "BaseHusk.generated.h"

class USkeletalMeshComponent;
class UCustomizedSkeletalMesh;

UCLASS()
class DBDGAMEPLAY_API ABaseHusk : public ABaseVFX
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _huskMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizedSkeletalMesh* _huskCustomizedSkeletalMesh;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldDeactivateVFX;

private:
	UPROPERTY(EditDefaultsOnly)
	bool _updateWeaponAccessories;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldWeaponBeVisible;

protected:
	UFUNCTION(BlueprintCallable)
	void SetScalarParameterOnAllChildrenMeshes(FName parameterName, float value, USkeletalMeshComponent* mesh);

	UFUNCTION(BlueprintCallable)
	void SetHuskVisibility(bool visible);

public:
	UFUNCTION(BlueprintCallable)
	void InitializeHusk(UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_InitializeSkeletalMesh(USkeletalMeshComponent* mesh);

public:
	ABaseHusk();
};

FORCEINLINE uint32 GetTypeHash(const ABaseHusk) { return 0; }
