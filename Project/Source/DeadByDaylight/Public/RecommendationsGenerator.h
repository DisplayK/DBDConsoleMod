#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecommendationsGenerator.generated.h"

class UShopManager;
class UDBDGameInstance;
class URecommendationsFilter;

UCLASS()
class URecommendationsGenerator : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UShopManager> _shopManager;

	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

	UPROPERTY(Transient)
	TMap<FString, URecommendationsFilter*> _filters;

public:
	URecommendationsGenerator();
};

FORCEINLINE uint32 GetTypeHash(const URecommendationsGenerator) { return 0; }
