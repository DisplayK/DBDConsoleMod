#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseVFX.generated.h"

UCLASS()
class VFXUTILITIES_API ABaseVFX : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	bool _shouldLoadOnServer;

public:
	ABaseVFX();
};

FORCEINLINE uint32 GetTypeHash(const ABaseVFX) { return 0; }
