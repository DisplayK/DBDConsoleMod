#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaCamperInitializer.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAtlantaCamperInitializer : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector HeartbeatOffset;

public:
	UAtlantaCamperInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaCamperInitializer) { return 0; }
