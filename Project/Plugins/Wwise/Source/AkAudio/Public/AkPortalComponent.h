#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkAcousticPortalState.h"
#include "Engine/EngineTypes.h"
#include "AkPortalComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkPortalComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AkAcousticPortalState InitialState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ObstructionRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;

public:
	UFUNCTION(BlueprintPure)
	bool PortalPlacementValid() const;

	UFUNCTION(BlueprintCallable)
	void OpenPortal();

	UFUNCTION(BlueprintPure)
	UPrimitiveComponent* GetPrimitiveParent() const;

	UFUNCTION(BlueprintPure)
	AkAcousticPortalState GetCurrentState() const;

	UFUNCTION(BlueprintCallable)
	void ClosePortal();

public:
	UAkPortalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkPortalComponent) { return 0; }
