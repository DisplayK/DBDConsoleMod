#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "VaultableOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVaultableOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _canBeRevealedToLocalPlayer;

public:
	UFUNCTION(BlueprintCallable)
	void SetCanBeRevealedToLocalPlayer(bool canBeRevealedToLocalPlayer);

public:
	UVaultableOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UVaultableOutlineUpdateStrategy) { return 0; }
