#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K28PowerPresentationItemProgressComponent.generated.h"

class AK28Power;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<AK28Power> _k28Power;

public:
	UK28PowerPresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28PowerPresentationItemProgressComponent) { return 0; }
