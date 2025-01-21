#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "MagicFountain.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AMagicFountain : public AInteractable, public IAIInteractableTargetInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector AIInteractionOffset;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsCorrupted() const;

public:
	AMagicFountain();
};

FORCEINLINE uint32 GetTypeHash(const AMagicFountain) { return 0; }
