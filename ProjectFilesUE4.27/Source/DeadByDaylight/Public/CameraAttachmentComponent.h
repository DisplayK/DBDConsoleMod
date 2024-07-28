#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraAttachment.h"
#include "CameraAttachmentComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCameraAttachmentComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _anchor;

	UPROPERTY(Transient)
	FCameraAttachment _defaultCameraAttachment;

	UPROPERTY(Transient)
	FCameraAttachment _currentCameraAttachment;

public:
	UFUNCTION(BlueprintCallable)
	void Reset();

	UFUNCTION(BlueprintPure)
	bool IsAttached() const;

	UFUNCTION(BlueprintCallable)
	void Detach();

public:
	UCameraAttachmentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCameraAttachmentComponent) { return 0; }
