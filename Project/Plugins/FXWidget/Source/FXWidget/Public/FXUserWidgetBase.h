#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FXWidgetPlayer.h"
#include "FXUserWidgetBase.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;

UCLASS(Abstract, EditInlineNew)
class UFXUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UNiagaraSystem* niagaraSystem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool isFillingWidget;

private:
	UPROPERTY(Transient)
	FFXWidgetPlayer _particlePlayer;

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintCosmetic)
	void StopParticle() const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintCosmetic)
	void PlayParticle(float startAtTime, int32 numLoopsToPlay) const;

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	UNiagaraComponent* GetNiagaraFX();

public:
	UFXUserWidgetBase();
};

FORCEINLINE uint32 GetTypeHash(const UFXUserWidgetBase) { return 0; }
