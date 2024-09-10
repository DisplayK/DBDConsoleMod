#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkLateReverbComponent.generated.h"

class UAkAuxBus;
class UAkAcousticTextureSetComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkLateReverbComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnable : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SendLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoAssignAuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAuxBus* AuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AuxBusName;

private:
	UPROPERTY(VisibleAnywhere)
	UAkAuxBus* AuxBusManual;

public:
	UFUNCTION(BlueprintCallable)
	void AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent);

public:
	UAkLateReverbComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkLateReverbComponent) { return 0; }
