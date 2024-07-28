#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnryoAfterImageComponent.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOnryoAfterImageComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _hideAfterImageDuringInteractions;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void ShouldShowAfterImageChanged(bool shouldBeVisible);

	UFUNCTION(BlueprintPure)
	bool ShouldShowAfterImage() const;

	UFUNCTION(BlueprintPure)
	bool IsOnryoInvisible() const;

	UFUNCTION(BlueprintPure)
	bool IsInteracting() const;

	UFUNCTION(BlueprintPure)
	bool IsAttacking() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetKiller() const;

public:
	UOnryoAfterImageComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoAfterImageComponent) { return 0; }
