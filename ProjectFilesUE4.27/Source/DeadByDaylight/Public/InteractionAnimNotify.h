#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "InteractionAnimNotify.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UInteractionAnimNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName NotifyID;

public:
	UInteractionAnimNotify();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionAnimNotify) { return 0; }
