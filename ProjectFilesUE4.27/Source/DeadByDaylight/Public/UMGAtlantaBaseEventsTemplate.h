#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaBaseEventsTemplate.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaBaseEventsTemplate : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UUMGAtlantaBaseEventsTemplate();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaBaseEventsTemplate) { return 0; }
