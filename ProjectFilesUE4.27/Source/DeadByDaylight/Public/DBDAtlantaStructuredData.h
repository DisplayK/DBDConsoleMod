#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDAtlantaStructuredData.generated.h"

class AAtlantaHeartbeatActor;

UCLASS(Transient)
class DEADBYDAYLIGHT_API UDBDAtlantaStructuredData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<AAtlantaHeartbeatActor> AtlantaHeartbeatActor;

public:
	UDBDAtlantaStructuredData();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAtlantaStructuredData) { return 0; }
