#pragma once

#include "CoreMinimal.h"
#include "SlashableInterface.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "CamperSlashableComponent.generated.h"

class USlashableActivationSourceCollection;
class UCapsuleComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperSlashableComponent : public UActorComponent, public ISlashableInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* _slashableZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* _hookSlashableZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float _standingCapsuleHalfHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float _crouchCapsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _slashableDisablingStateTags;

	UPROPERTY(EditDefaultsOnly)
	float _sourceActivationLingerDuration;

private:
	UPROPERTY(Transient, Export)
	USlashableActivationSourceCollection* _slashableActivationSources;

public:
	UFUNCTION(BlueprintCallable)
	void SetUseCrouchSlashableCapsule(bool useCrouchCapsule);

	UFUNCTION(BlueprintCallable)
	void SetStandingCapsuleHalfHeight(float height);

	UFUNCTION(BlueprintCallable)
	void SetSlashableZone(UCapsuleComponent* zone);

	UFUNCTION(BlueprintCallable)
	void SetHookSlashableZone(UCapsuleComponent* zone);

	UFUNCTION(BlueprintCallable)
	void SetCrouchCapsuleHalfHeight(float height);

public:
	UCamperSlashableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperSlashableComponent) { return 0; }
