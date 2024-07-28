#pragma once

#include "CoreMinimal.h"
#include "PlayerProfileDAL.h"
#include "EpicProfileDAL.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UEpicProfileDAL : public UPlayerProfileDAL
{
	GENERATED_BODY()

public:
	UEpicProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UEpicProfileDAL) { return 0; }
