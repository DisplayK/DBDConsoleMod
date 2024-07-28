#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "WhiteGlyphSpawnerComponent.generated.h"

class UWhiteGlyphSurfaceComponent;
class UTileSpawnPoint;
class AGlyph;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGlyph> _surfaceGlyphClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromBasement;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxDistanceFromBasement;

	UPROPERTY(EditDefaultsOnly)
	float _spawnDistanceDebug;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _surfaceGlyphCoolDownTime;

	UPROPERTY(Transient, Export)
	UWhiteGlyphSurfaceComponent* _lastSurfaceGlyphComponentDebug;

	UPROPERTY(Transient, Export)
	TArray<UTileSpawnPoint*> _spawnPointsCollection;

protected:
	UFUNCTION(BlueprintPure)
	AGlyph* GetOwningGlyph() const;

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UWhiteGlyphSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWhiteGlyphSpawnerComponent) { return 0; }
