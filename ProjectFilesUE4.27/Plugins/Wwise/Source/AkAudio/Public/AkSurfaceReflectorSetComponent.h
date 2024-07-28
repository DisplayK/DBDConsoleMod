#pragma once

#include "CoreMinimal.h"
#include "AkSurfacePoly.h"
#include "AkAcousticTextureSetComponent.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnableSurfaceReflectors : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAkSurfacePoly> AcousticPolys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnableDiffraction : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnableDiffractionOnBoundaryEdges : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* AssociatedRoom;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSurfaceReflectorSet();

	UFUNCTION(BlueprintCallable)
	void SendSurfaceReflectorSet();

	UFUNCTION(BlueprintCallable)
	void RemoveSurfaceReflectorSet();

public:
	UAkSurfaceReflectorSetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkSurfaceReflectorSetComponent) { return 0; }
