#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterToolItemData.h"
#include "CharacterToolAnimation.generated.h"

UCLASS(MinimalAPI, NonTransient)
class UCharacterToolAnimation : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FCharacterToolItemData> SelectedItems;

public:
	UCharacterToolAnimation();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterToolAnimation) { return 0; }
