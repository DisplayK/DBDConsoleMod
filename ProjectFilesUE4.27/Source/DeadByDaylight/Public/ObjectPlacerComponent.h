#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "ObjectPlacerComponent.generated.h"

class UObjectPlacementUpdateStrategy;
class UStaticMeshComponent;
class UObjectPlacementValidationStrategy;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UObjectPlacerComponent : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _objectMesh;

	UPROPERTY(EditDefaultsOnly)
	FName _socketName;

	UPROPERTY(EditDefaultsOnly)
	float _indicatorOffsetY;

	UPROPERTY(EditDefaultsOnly)
	float _indicatorOffsetX;

	UPROPERTY(EditDefaultsOnly)
	float _meshOffsetZ;

	UPROPERTY(EditDefaultsOnly)
	FName _itemObjectId;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _showIndicator;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _stayActiveWhileItemInUse;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hideIndicatorDuringAttack;

	UPROPERTY(EditDefaultsOnly, NoClear, Export)
	UObjectPlacementUpdateStrategy* _objectPlacementUpdateStrategy;

	UPROPERTY(EditDefaultsOnly, NoClear, Export)
	UObjectPlacementValidationStrategy* _objectPlacementValidationStrategy;

public:
	UFUNCTION(BlueprintCallable)
	void SetShowIndicator(bool newValue);

private:
	UFUNCTION(BlueprintCallable)
	void SetObjectMesh(UStaticMeshComponent* objectMesh);

public:
	UFUNCTION(BlueprintCallable)
	void SetMeshOffsetZ(float z);

	UFUNCTION(BlueprintCallable)
	void SetIndicatorOffsetY(float y);

	UFUNCTION(BlueprintCallable)
	void SetIndicatorOffsetX(float x);

	UFUNCTION(BlueprintCallable)
	void SetHideIndicatorDuringAttack(bool enable);

	UFUNCTION(BlueprintPure)
	bool IsPlacementValid() const;

	UFUNCTION(BlueprintPure)
	FRotator GetObjectPlacementRotation() const;

	UFUNCTION(BlueprintPure)
	FVector GetObjectPlacementLocation() const;

	UFUNCTION(BlueprintCallable)
	void ActivateObjectPlacement(bool active);

public:
	UObjectPlacerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UObjectPlacerComponent) { return 0; }
