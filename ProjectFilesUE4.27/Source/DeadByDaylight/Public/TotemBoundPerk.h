#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ETotemState.h"
#include "TotemBoundPerk.generated.h"

class ATotem;
class AActor;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTotemBoundPerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ETotemState TotemBoundState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _doNotBindToTotemOnInit;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_BoundTotems, Transient)
	TArray<ATotem*> _boundTotems;

	UPROPERTY(Transient)
	TArray<ATotem*> _local_boundTotems;

	UPROPERTY(Transient)
	TArray<ATotem*> _authorityPrevTotemActors;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 _numTotemsToBind;

private:
	UFUNCTION()
	void OnRep_BoundTotems();

public:
	UFUNCTION(BlueprintPure)
	TArray<ATotem*> GetTotems() const;

	UFUNCTION(BlueprintPure)
	float GetSquaredDistanceToOwner(const AActor* survivor) const;

	UFUNCTION(BlueprintPure)
	TArray<ATotem*> GetBoundTotems() const;

	UFUNCTION()
	void Authority_UnbindFromTotem(ATotem* aTotemActor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_BindToDullTotems(bool allowAdditionalBoundTotems);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTotemBoundPerk();
};

FORCEINLINE uint32 GetTypeHash(const UTotemBoundPerk) { return 0; }
