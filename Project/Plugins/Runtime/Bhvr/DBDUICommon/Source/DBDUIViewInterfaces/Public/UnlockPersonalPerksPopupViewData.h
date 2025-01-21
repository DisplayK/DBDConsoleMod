#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "UnlockPersonalPerksPopupViewData.generated.h"

class UMenuPerkViewData;

UCLASS()
class DBDUIVIEWINTERFACES_API UUnlockPersonalPerksPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UMenuPerkViewData*> PerksData;

public:
	UUnlockPersonalPerksPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UUnlockPersonalPerksPopupViewData) { return 0; }
