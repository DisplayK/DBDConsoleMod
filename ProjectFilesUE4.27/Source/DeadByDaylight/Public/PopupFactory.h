#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PopupFactory.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UPopupFactory : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

public:
	UPopupFactory();
};

FORCEINLINE uint32 GetTypeHash(const UPopupFactory) { return 0; }
