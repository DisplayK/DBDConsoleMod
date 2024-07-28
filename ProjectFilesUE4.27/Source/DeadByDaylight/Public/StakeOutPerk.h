#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "StakeOutPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UStakeOutPerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int32> MaxTokensByLevel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float TokenChargeTime;

protected:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ConsumeToken();

public:
	UFUNCTION(BlueprintCallable)
	void Local_BroadcastConsumeToken();

public:
	UStakeOutPerk();
};

FORCEINLINE uint32 GetTypeHash(const UStakeOutPerk) { return 0; }
