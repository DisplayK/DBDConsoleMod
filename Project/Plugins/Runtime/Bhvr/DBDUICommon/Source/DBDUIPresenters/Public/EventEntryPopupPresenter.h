#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "EventEntryPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UEventEntryPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	UEventEntryPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryPopupPresenter) { return 0; }
