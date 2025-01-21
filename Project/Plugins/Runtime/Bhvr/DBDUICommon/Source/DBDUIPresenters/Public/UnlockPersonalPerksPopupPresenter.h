#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "UnlockPersonalPerksPopupPresenter.generated.h"

class UMenuPerkViewData;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UUnlockPersonalPerksPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	TArray<UMenuPerkViewData*> _perksData;

public:
	UUnlockPersonalPerksPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UUnlockPersonalPerksPopupPresenter) { return 0; }
