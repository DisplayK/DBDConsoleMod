#pragma once

#include "CoreMinimal.h"
#include "OnCharmAnimationTagsChanged.h"
#include "OnAttachedOnActor.h"
#include "GameFramework/Actor.h"
#include "CharmAttacherAnimationTweak.h"
#include "CharmAttacher.generated.h"

class USkeletalMeshComponent;
class ACharm;

UCLASS()
class ACharmAttacher : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnAttachedOnActor OnAttachedOnActor;

	UPROPERTY(BlueprintAssignable)
	FOnCharmAnimationTagsChanged OnCharmAnimationTagsChanged;

private:
	UPROPERTY(VisibleAnywhere, Export)
	USkeletalMeshComponent* _chain;

	UPROPERTY(Transient)
	ACharm* _attachedCharm;

public:
	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetSkeletalMeshComponentAttachedOn();

	UFUNCTION(BlueprintPure)
	ACharm* GetAttachedCharm();

	UFUNCTION(BlueprintPure)
	FCharmAttacherAnimationTweak GetAnimationTweak();

	UFUNCTION(BlueprintPure)
	AActor* GetActorAttachedOn();

private:
	UFUNCTION()
	void DispatchOnCharmAnimationTagsChanged();

	UFUNCTION()
	void BindOnCharmAnimationTagsChanged();

public:
	ACharmAttacher();
};

FORCEINLINE uint32 GetTypeHash(const ACharmAttacher) { return 0; }
