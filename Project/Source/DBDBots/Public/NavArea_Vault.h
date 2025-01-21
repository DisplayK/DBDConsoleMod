#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_Vault.generated.h"

UCLASS()
class DBDBOTS_API UNavArea_Vault : public UNavArea
{
	GENERATED_BODY()

public:
	UNavArea_Vault();
};

FORCEINLINE uint32 GetTypeHash(const UNavArea_Vault) { return 0; }
