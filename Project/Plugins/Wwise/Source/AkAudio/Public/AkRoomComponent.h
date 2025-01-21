#pragma once

#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "AkRoomComponent.generated.h"

class UAkAcousticTextureSetComponent;
class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkRoomComponent : public UAkGameObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnable : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WallOcclusion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AuxSendLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoPost;

private:
	UPROPERTY(Transient, Export)
	UAkAcousticTextureSetComponent* GeometryComponent;

public:
	UFUNCTION(BlueprintPure)
	UPrimitiveComponent* GetPrimitiveParent() const;

public:
	UAkRoomComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkRoomComponent) { return 0; }
