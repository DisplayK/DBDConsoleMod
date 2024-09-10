#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "SocketOrBoneCache.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSocketOrBoneCache
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimSequence> _sourceAnimation;

	UPROPERTY(EditAnywhere)
	FName _socketName;

	UPROPERTY(EditAnywhere)
	FName _notifyName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector _location;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FRotator _rotation;

public:
	ANIMATIONUTILITIES_API FSocketOrBoneCache();
};

FORCEINLINE uint32 GetTypeHash(const FSocketOrBoneCache) { return 0; }
