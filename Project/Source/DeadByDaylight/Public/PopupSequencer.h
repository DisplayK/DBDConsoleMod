#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PopupSequencer.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UPopupSequencer : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

public:
	UPopupSequencer();
};

FORCEINLINE uint32 GetTypeHash(const UPopupSequencer) { return 0; }
