#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "EEventsType.h"
#include "AtlantaEventsTemplateDataAsset.generated.h"

class UUMGAtlantaBaseEventsTemplate;

UCLASS()
class UAtlantaEventsTemplateDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TMap<EEventsType, TSubclassOf<UUMGAtlantaBaseEventsTemplate>> Data;

public:
	UAtlantaEventsTemplateDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaEventsTemplateDataAsset) { return 0; }
