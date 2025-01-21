#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TriplanarDecalComponent.generated.h"

class UTexture2D;
class UDecalComponent;
class UMaterial;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriplanarDecalComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Height;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaskIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* TopTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* BottomTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* MaskTexture;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EDetailMode> MinQualitySetting;

private:
	UPROPERTY(Transient, Export)
	UDecalComponent* _triPlanarDecal;

	UPROPERTY(Transient)
	UClass* _triPlanarDecalClass;

	UPROPERTY(Transient)
	UMaterial* _decalMaterial;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateTriplanarDecal();

public:
	UTriplanarDecalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTriplanarDecalComponent) { return 0; }
