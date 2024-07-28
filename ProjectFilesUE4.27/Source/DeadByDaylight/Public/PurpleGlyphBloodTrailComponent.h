#pragma once

#include "CoreMinimal.h"
#include "BloodTrailComponent.h"
#include "PurpleGlyphBloodTrailComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPurpleGlyphBloodTrailComponent : public UBloodTrailComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void DeactivateGlyphBloodTrail();

public:
	UPurpleGlyphBloodTrailComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPurpleGlyphBloodTrailComponent) { return 0; }
