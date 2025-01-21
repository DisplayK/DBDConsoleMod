#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "HillbillyOverheatPresentationItemProgressComponent.generated.h"

class UHillbillyChainsawOverheatComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UHillbillyOverheatPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UHillbillyChainsawOverheatComponent* _hillbillyChainsawOverheatComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetHillbillyChainsawOverheatComponent(UHillbillyChainsawOverheatComponent* hillbillyChainsawOverheatComponent);

public:
	UHillbillyOverheatPresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyOverheatPresentationItemProgressComponent) { return 0; }
