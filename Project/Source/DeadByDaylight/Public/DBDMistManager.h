#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDMistManager.generated.h"

class UDBDAggregateParticleSystemComponent;

UCLASS()
class DEADBYDAYLIGHT_API ADBDMistManager : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDAggregateParticleSystemComponent* _particleSystemComp;

public:
	ADBDMistManager();
};

FORCEINLINE uint32 GetTypeHash(const ADBDMistManager) { return 0; }
