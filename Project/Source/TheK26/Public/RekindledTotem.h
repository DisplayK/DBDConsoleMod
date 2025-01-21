#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UObject/NoExportTypes.h"
#include "ETotemState.h"
#include "Engine/EngineTypes.h"
#include "RekindledTotem.generated.h"

class ATotem;
class AActor;
class USourceBasedOutlineUpdateStrategy;
class UDBDOutlineComponent;

UCLASS()
class THEK26_API ARekindledTotem : public AStaticMeshActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _auraColor;

	UPROPERTY(VisibleAnywhere, Export)
	USourceBasedOutlineUpdateStrategy* _outlineStrategy;

	UPROPERTY(VisibleAnywhere, Export)
	UDBDOutlineComponent* _outlineComponent;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void RebuildTotem(ATotem* totem);

private:
	UFUNCTION()
	void OnParentTotemEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowShadowTotem(bool instant);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HideShadowTotem(bool instant);

	UFUNCTION(BlueprintImplementableEvent)
	void CleanseTotem(ATotem* totem, const ETotemState oldTotemState);

public:
	ARekindledTotem();
};

FORCEINLINE uint32 GetTypeHash(const ARekindledTotem) { return 0; }
