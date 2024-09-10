#pragma once

#include "CoreMinimal.h"
#include "MenuLoadoutPartViewData.h"
#include "MenuPerkViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UMenuPerkViewData : public UMenuLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

public:
	UMenuPerkViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuPerkViewData) { return 0; }
