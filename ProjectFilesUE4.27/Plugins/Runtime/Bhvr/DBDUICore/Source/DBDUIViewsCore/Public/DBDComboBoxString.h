#pragma once

#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "DBDComboBoxString.generated.h"

UCLASS()
class UDBDComboBoxString : public UComboBoxString
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const TArray<FString>& OptionsList, const FString& DefaultOption);

public:
	UDBDComboBoxString();
};

FORCEINLINE uint32 GetTypeHash(const UDBDComboBoxString) { return 0; }
