#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "TagContainerQueryInstance.generated.h"

UCLASS()
class UTagContainerQueryInstance : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FGameplayTagQuery Query;

public:
	UTagContainerQueryInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTagContainerQueryInstance) { return 0; }
