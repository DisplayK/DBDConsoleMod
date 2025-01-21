#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterXPManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UCharacterXPManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

public:
	UCharacterXPManager();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterXPManager) { return 0; }
