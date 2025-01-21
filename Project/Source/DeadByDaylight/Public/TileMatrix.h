#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArrayOfATile.h"
#include "QuadrantInfo.h"
#include "ArrayOfInt32.h"
#include "TileMatrix.generated.h"

class ATile;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UTileMatrix : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<FArrayOfATile> _matrix;

	UPROPERTY(Transient)
	TArray<ATile*> _tiles;

	UPROPERTY(Transient)
	TArray<ATile*> _extraTiles;

	UPROPERTY(Transient)
	AActor* _basementActor;

	UPROPERTY(Transient)
	TArray<FQuadrantInfo> _quadInfoArray;

	UPROPERTY(Transient)
	TArray<FArrayOfInt32> _quadIndexMatrix;

public:
	UTileMatrix();
};

FORCEINLINE uint32 GetTypeHash(const UTileMatrix) { return 0; }
