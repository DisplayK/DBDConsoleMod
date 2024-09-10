#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FootBoneData.h"
#include "LocomotionPredictor.generated.h"

class UAnimSequence;

UCLASS()
class DBDANIMATION_API ULocomotionPredictor : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<UAnimSequence*, FFootBoneData> _animFootData;

public:
	ULocomotionPredictor();
};

FORCEINLINE uint32 GetTypeHash(const ULocomotionPredictor) { return 0; }
