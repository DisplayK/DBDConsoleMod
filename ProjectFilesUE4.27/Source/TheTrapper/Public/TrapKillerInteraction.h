#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractionDefinition.h"
#include "TrapKillerInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTrapKillerInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FString> _overridableInteractions;

	UPROPERTY(EditAnywhere)
	FRotator _caughtFootRotationOffset;

	UPROPERTY(EditAnywhere)
	FName _openNotifyID;

	UPROPERTY(EditAnywhere)
	FName _footSocketName;

public:
	UTrapKillerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTrapKillerInteraction) { return 0; }
