#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECustomizationCategory.h"
#include "CustomizedSkeletalMesh.generated.h"

class UCustomizedSkeletalMesh;
class USkinnedMeshComponent;
class USkeletalMeshComponent;
class AItemVfx;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCustomizedSkeletalMesh : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeshSwitchEventBP, ECustomizationCategory, category, USkeletalMeshComponent*, mesh);

public:
	UPROPERTY(BlueprintAssignable)
	FOnMeshSwitchEventBP OnMeshSwitchBP;

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	USkinnedMeshComponent* _meshOwner;

private:
	UPROPERTY(EditDefaultsOnly)
	TSet<ECustomizationCategory> _ignoredItemCategories;

	UPROPERTY(Transient, Export)
	TArray<USkeletalMeshComponent*> Components;

	UPROPERTY(Transient, Export)
	TMap<ECustomizationCategory, USkeletalMeshComponent*> _customizationBasePartMeshes;

	UPROPERTY(Transient, Export)
	TArray<USkeletalMeshComponent*> Slaves;

	UPROPERTY(Transient)
	TMap<ECustomizationCategory, AItemVfx*> _itemVfxs;

	UPROPERTY(EditAnywhere)
	int32 _characterIdOverride;

public:
	UFUNCTION(BlueprintCallable)
	void SetVfxsVisibility(ECustomizationCategory category, bool visible);

	UFUNCTION(BlueprintCallable)
	void SetMeshVisibility(bool visible);

	UFUNCTION(BlueprintCallable)
	void SetMeshOwner(USkinnedMeshComponent* mesh);

	UFUNCTION(BlueprintCallable)
	void SetCastShadow(bool castShadow);

	UFUNCTION(BlueprintCallable)
	void SetAllVfxsVisibility(bool visible);

	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetSkeletalMesh(ECustomizationCategory category) const;

	UFUNCTION(BlueprintCallable)
	USkinnedMeshComponent* GetMeshOwner();

	UFUNCTION(BlueprintPure)
	TArray<FName> GetCurrentCustomizationItems() const;

	UFUNCTION(BlueprintPure)
	TArray<USkeletalMeshComponent*> GetComponents() const;

	UFUNCTION(BlueprintCallable)
	void CopyCustomization(const UCustomizedSkeletalMesh* copyFrom);

	UFUNCTION(BlueprintPure)
	bool Contains(TArray<FName> itemIds) const;

	UFUNCTION(BlueprintCallable)
	void ClearAllVfxs();

public:
	UCustomizedSkeletalMesh();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizedSkeletalMesh) { return 0; }
