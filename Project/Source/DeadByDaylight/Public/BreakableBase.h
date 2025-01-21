#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "EBreakableState.h"
#include "BreakableBase.generated.h"

class USceneComponent;
class UAkComponent;
class ADBDPlayer;
class UBoxComponent;
class UAkAudioEvent;

UCLASS(Abstract)
class DEADBYDAYLIGHT_API ABreakableBase : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UBoxComponent* _breakableCollision;

	UPROPERTY(BlueprintReadWrite, Transient)
	EBreakableState _state;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UAkComponent* _akAudioBreakable;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* _akAudioBreakEvent;

private:
	UPROPERTY(Export)
	USceneComponent* _rootComponent;

public:
	UFUNCTION(BlueprintCallable)
	void PlayAudioBreakable();

	UFUNCTION(BlueprintPure)
	bool IsUnbroken() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ExplodeVfxSfx(const FVector impulseDir);

public:
	UFUNCTION(BlueprintCallable)
	void Explode(ADBDPlayer* player);

public:
	ABreakableBase();
};

FORCEINLINE uint32 GetTypeHash(const ABreakableBase) { return 0; }
