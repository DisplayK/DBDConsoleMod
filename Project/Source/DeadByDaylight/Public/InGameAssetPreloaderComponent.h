#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "InGameAssetPreloaderComponent.generated.h"

class UInGameAssetPreloaderGatherer;
class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInGameAssetPreloaderComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSet<FPrimaryAssetId> _generalPrimaryAssetIds;

	UPROPERTY(EditDefaultsOnly)
	TSet<TSoftClassPtr<UObject>> _generalRegularAssets;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UInGameAssetPreloaderGatherer>> _assetGathererClasses;

	UPROPERTY(Transient)
	TArray<UInGameAssetPreloaderGatherer*> _assetGatherers;

public:
	UInGameAssetPreloaderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInGameAssetPreloaderComponent) { return 0; }
