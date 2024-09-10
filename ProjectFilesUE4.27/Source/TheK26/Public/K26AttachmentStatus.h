#pragma once

#include "CoreMinimal.h"
#include "FK26AttachedCrowRemovalReason.h"
#include "K26AttachmentStatus.generated.h"

USTRUCT(BlueprintType)
struct FK26AttachmentStatus
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FK26AttachedCrowRemovalReason LastRemovalReason;

	UPROPERTY()
	bool IsAttached;

public:
	THEK26_API FK26AttachmentStatus();
};

FORCEINLINE uint32 GetTypeHash(const FK26AttachmentStatus) { return 0; }
