#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "CustomizedAnimationComponent.generated.h"

class UCustomizedSkeletalMesh;
class UAnimInstance;
class ADBDBasePlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCustomizedAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADBDBasePlayer* _owner;

	UPROPERTY(Transient, Export)
	UCustomizedSkeletalMesh* _customizedSkeletalMesh;

	UPROPERTY(Transient)
	TSubclassOf<UAnimInstance> _defaultAnimClass;

private:
	UFUNCTION()
	void OnCustomizationChanged();

public:
	UCustomizedAnimationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizedAnimationComponent) { return 0; }
