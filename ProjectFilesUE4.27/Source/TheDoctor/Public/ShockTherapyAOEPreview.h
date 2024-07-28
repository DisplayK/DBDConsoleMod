#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TunableStat.h"
#include "ShockTherapyAOEPreview.generated.h"

UCLASS()
class AShockTherapyAOEPreview : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FVector _baseWorldScale;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _shockTherapyRange;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetAttackZonePreviewScale(const FVector& scale);

public:
	AShockTherapyAOEPreview();
};

FORCEINLINE uint32 GetTypeHash(const AShockTherapyAOEPreview) { return 0; }
