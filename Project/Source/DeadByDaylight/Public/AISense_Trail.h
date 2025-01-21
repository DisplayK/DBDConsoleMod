#pragma once

#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "GameplayTagContainer.h"
#include "AITrailEvent.h"
#include "UObject/NoExportTypes.h"
#include "AISense_Trail.generated.h"

class AActor;
class UObject;

UCLASS()
class DEADBYDAYLIGHT_API UAISense_Trail : public UAISense
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<FAITrailEvent> Events;

public:
	UFUNCTION(BlueprintCallable)
	static void ReportTrailEvent(UObject* worldContextObj, FVector location, AActor* instigator, FGameplayTag ignoreOnPerkTag, float lifeTime);

public:
	UAISense_Trail();
};

FORCEINLINE uint32 GetTypeHash(const UAISense_Trail) { return 0; }
