#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NewsContentManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UNewsContentManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

public:
	UNewsContentManager();
};

FORCEINLINE uint32 GetTypeHash(const UNewsContentManager) { return 0; }
