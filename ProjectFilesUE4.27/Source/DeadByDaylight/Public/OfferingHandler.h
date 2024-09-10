#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OfferingHandler.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UOfferingHandler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

	UPROPERTY(Replicated, Transient)
	TArray<FName> _levelPerkIDs;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UOfferingHandler();
};

FORCEINLINE uint32 GetTypeHash(const UOfferingHandler) { return 0; }
