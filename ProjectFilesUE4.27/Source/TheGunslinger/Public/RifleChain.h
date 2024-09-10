#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "AkSoundLoop.h"
#include "UObject/ScriptInterface.h"
#include "Engine/EngineTypes.h"
#include "RifleChain.generated.h"

class ADBDPlayer;
class UCurveFloat;
class UAkComponent;
class IGunslingerHarpoon;
class UAkAudioEvent;
class UInstancedStaticMeshComponent;
class USplineComponent;
class URiflePlayerLinker;
class URifleChainTensionComponent;

UCLASS()
class THEGUNSLINGER_API ARifleChain : public AActor
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileSet, AActor*, projectile);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsCollidingChanged, bool, isColliding);

public:
	UPROPERTY(BlueprintAssignable)
	FOnProjectileSet OnProjectileSet;

	UPROPERTY(BlueprintAssignable)
	FOnIsCollidingChanged OnIsCollidingChanged;

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _chainCenterAkComponent;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* _collisionLoopStartEvent;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* _collisionLoopEndEvent;

	UPROPERTY(Transient)
	TArray<FAkSoundLoop> _collisionSoundLoops;

private:
	UPROPERTY(EditAnywhere)
	float _sphereTraceRadius;

	UPROPERTY(EditAnywhere)
	float _timeBetweenTrace;

	UPROPERTY(Transient)
	TScriptInterface<IGunslingerHarpoon> _harpoon;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateChainMesh(UInstancedStaticMeshComponent* mesh, USplineComponent* spline, float alpha);

	UFUNCTION(BlueprintCallable)
	int32 SpawnChainPoints(FVector start, FVector stop, UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, USplineComponent* spline);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUnattachFromPlayer(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnReelBackToRifle();

	UFUNCTION(BlueprintImplementableEvent)
	void OnLaunch();

	UFUNCTION(BlueprintImplementableEvent)
	void OnAttachToPlayer(ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	bool IsColliding() const;

	UFUNCTION(BlueprintPure)
	float GetUnwindingSpeed() const;

	UFUNCTION(BlueprintPure)
	URiflePlayerLinker* GetRiflePlayerLinker() const;

	UFUNCTION(BlueprintPure)
	TArray<FHitResult> GetFirstAndLastCollisionHits() const;

	UFUNCTION(BlueprintPure)
	URifleChainTensionComponent* GetChainTensionComponent() const;

	UFUNCTION(BlueprintPure)
	FVector GetChainStart() const;

	UFUNCTION(BlueprintPure)
	FVector GetChainEnd() const;

public:
	ARifleChain();
};

FORCEINLINE uint32 GetTypeHash(const ARifleChain) { return 0; }
