#pragma once

#include "CoreMinimal.h"
#include "AITrailEvent.h"
#include "Perception/AISenseEvent.h"
#include "AISenseEvent_Trail.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseEvent_Trail : public UAISenseEvent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITrailEvent Event;

public:
	UAISenseEvent_Trail();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseEvent_Trail) { return 0; }
