#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "FearMarketPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UFearMarketPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	UFearMarketPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UFearMarketPopupPresenter) { return 0; }
