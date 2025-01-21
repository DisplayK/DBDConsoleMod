#pragma once

#include "CoreMinimal.h"
#include "PointsProvider.h"
#include "Engine/EngineTypes.h"
#include "MeshSocketPointsProvider.generated.h"

class UMeshComponent;

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API UMeshSocketPointsProvider : public UPointsProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FComponentReference _meshReference;

	UPROPERTY(Transient, Export)
	UMeshComponent* _mesh;

	UPROPERTY(EditAnywhere)
	TArray<FName> _sockets;

public:
	UMeshSocketPointsProvider();
};

FORCEINLINE uint32 GetTypeHash(const UMeshSocketPointsProvider) { return 0; }
