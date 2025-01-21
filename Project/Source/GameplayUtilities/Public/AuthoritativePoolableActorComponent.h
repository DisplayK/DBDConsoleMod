#pragma once

#include "CoreMinimal.h"
#include "BasePoolableActorComponent.h"
#include "AuthoritativePoolableActorComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UAuthoritativePoolableActorComponent : public UBasePoolableActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_Acquired)
	bool _acquired;

private:
	UFUNCTION()
	void OnRep_Acquired();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAuthoritativePoolableActorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAuthoritativePoolableActorComponent) { return 0; }
