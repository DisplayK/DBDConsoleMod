#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BloodwebSettings.generated.h"

UCLASS()
class UBloodwebSettings : public UDataAsset
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FName> _duplicableItems;

public:
	UBloodwebSettings();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebSettings) { return 0; }
