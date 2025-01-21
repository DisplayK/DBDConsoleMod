#pragma once

#include "CoreMinimal.h"
#include "UObject/LazyObjectPtr.h"
#include "StandinProxyEntry.generated.h"

class UTexture2D;
class UStaticMesh;
class AStandInMeshActor;
class UMaterialInterface;

USTRUCT()
struct FStandinProxyEntry
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	TLazyObjectPtr<AStandInMeshActor> StandinActor;

	UPROPERTY(VisibleAnywhere)
	UStaticMesh* StaticMesh;

	UPROPERTY(VisibleAnywhere)
	UMaterialInterface* Material;

	UPROPERTY(VisibleAnywhere)
	TArray<UTexture2D*> Textures;

	UPROPERTY(VisibleAnywhere)
	FName Key;

public:
	STANDINACTOR_API FStandinProxyEntry();
};

FORCEINLINE uint32 GetTypeHash(const FStandinProxyEntry) { return 0; }
