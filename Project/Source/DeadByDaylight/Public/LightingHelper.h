#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightingHelper.generated.h"

class UPostProcessComponent;
class ABaseSky;
class ULightingFactory;
class AActor;
class UActorComponent;
class ULightingInterpolator;
class UTextureCube;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API ULightingHelper : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ABaseSky* _levelLighting;

	UPROPERTY(Transient)
	ABaseSky* _levelLightingFixed;

	UPROPERTY(Transient)
	ABaseSky* _levelLightingSpawned;

	UPROPERTY(Transient)
	ABaseSky* _levelLightingWithoutExposure;

	UPROPERTY(Transient)
	AActor* _adaptiveShadowMapControllersActor;

	UPROPERTY(Transient)
	ULightingInterpolator* _lightingInterpolator;

	UPROPERTY(Transient)
	ULightingFactory* _lightingFactory;

	UPROPERTY(Transient, Export)
	UPostProcessComponent* _postProcessCache;

	UPROPERTY(Transient)
	bool _bIsDreamworldActive;

public:
	UFUNCTION(BlueprintCallable)
	void ToggleDreamworldLighting(bool bActivateDreamworld);

	UFUNCTION(BlueprintCallable)
	UTextureCube* GetTextureCube(FName mapTheme);

	UFUNCTION(BlueprintCallable)
	UClass* GetSourceLevelLightingClass();

	UFUNCTION(BlueprintCallable)
	UActorComponent* GetInitialComponentState(FName componentName);

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ModifyExposure(float value);

public:
	ULightingHelper();
};

FORCEINLINE uint32 GetTypeHash(const ULightingHelper) { return 0; }
