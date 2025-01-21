#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K26ProjectileStateDetails.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FK26ProjectileStateDetails
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle VisualScaleX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle VisualScaleY;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle VisualScaleZ;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle HitboxScaleX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle HitboxScaleY;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle HitboxScaleZ;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMesh* HitBoxStaticMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FLinearColor DebugColor;

public:
	THEK26_API FK26ProjectileStateDetails();
};

FORCEINLINE uint32 GetTypeHash(const FK26ProjectileStateDetails) { return 0; }
