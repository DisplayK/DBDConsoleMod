#pragma once

#include "CoreMinimal.h"
#include "AimableInterface.h"
#include "Components/ActorComponent.h"
#include "AimableComponent.generated.h"

class UAimPointProcessor;
class AActor;
class UAimDirectionProvider;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UAimableComponent : public UActorComponent, public IAimableInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	TArray<AActor*> _occlusionIgnoredActors;

	UPROPERTY(EditAnywhere)
	float _maxAimDistance;

	UPROPERTY(EditAnywhere, meta=(BindWidgetOptional))
	UAimDirectionProvider* _aimDirectionProvider;

	UPROPERTY(EditAnywhere)
	bool _useOcclusion;

	UPROPERTY(EditAnywhere)
	float _aimPointLerpFactor;

	UPROPERTY(Export)
	TArray<UAimPointProcessor*> _preOcclusionAimPointProcessors;

public:
	UFUNCTION(BlueprintCallable)
	void SetProcessors(TArray<UAimPointProcessor*> processors);

	UFUNCTION(BlueprintCallable)
	void SetOcclusionIgnoredActors(const TArray<AActor*>& ignoredActors);

	UFUNCTION(BlueprintCallable)
	void SetMaxAimDistance(float maxAimDistance);

public:
	UAimableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAimableComponent) { return 0; }
