#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterProgressionManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UCharacterProgressionManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

public:
	UCharacterProgressionManager();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterProgressionManager) { return 0; }
