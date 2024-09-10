#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "CannibalPowerPresentationItemProgressComponent.generated.h"

class UCannibalChainsawPowerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THECANNIBAL_API UCannibalPowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCannibalChainsawPowerComponent* _cannibalPowerChainsawComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetCannibalChainsawPowerComponent(UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent);

public:
	UCannibalPowerPresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalPowerPresentationItemProgressComponent) { return 0; }
