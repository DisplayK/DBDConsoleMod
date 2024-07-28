#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EK25ChainAnchorPointDirection.h"
#include "EK25ChainAttachmentLimbType.h"
#include "K25SurvivorChainAttachmentData.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK25SurvivorChainAttachmentData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName AnchorName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EK25ChainAnchorPointDirection Direction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector RelativeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsFlexibleLimb;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EK25ChainAttachmentLimbType LimbType;

private:
	UPROPERTY(Transient)
	ACamperPlayer* _attachedSurvivor;

public:
	THEK25_API FK25SurvivorChainAttachmentData();
};

FORCEINLINE uint32 GetTypeHash(const FK25SurvivorChainAttachmentData) { return 0; }
