#pragma once

#include "CoreMinimal.h"
#include "CharmSlot.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "CharmIdSlot.h"
#include "CharmSpawnerComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCharmSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName SocketRootName;

	UPROPERTY(EditAnywhere)
	TArray<FCharmSlot> CharmSlots;

	UPROPERTY(EditAnywhere)
	FVector ScaleCharm;

private:
	UPROPERTY(EditAnywhere)
	int32 _forcedLOD;

public:
	UFUNCTION(BlueprintCallable)
	void ReplaceCharmTextures(const TArray<FCharmIdSlot>& customization);

public:
	UCharmSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharmSpawnerComponent) { return 0; }
