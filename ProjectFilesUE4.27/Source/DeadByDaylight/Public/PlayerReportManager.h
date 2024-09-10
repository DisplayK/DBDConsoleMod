#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerReportManager.generated.h"

class UDBDGameInstance;

UCLASS()
class UPlayerReportManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

public:
	UPlayerReportManager();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerReportManager) { return 0; }
