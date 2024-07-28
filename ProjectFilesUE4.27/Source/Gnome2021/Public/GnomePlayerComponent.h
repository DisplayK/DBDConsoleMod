#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GnomePlayerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGnomePlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated, Transient)
	bool _hasInteractedWithGnomeThisGame;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGnomePlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGnomePlayerComponent) { return 0; }
