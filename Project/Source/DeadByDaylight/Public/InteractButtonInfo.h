#pragma once

#include "CoreMinimal.h"
#include "EButtonType.h"
#include "EInputInteractionType.h"
#include "Engine/DataTable.h"
#include "EPlayerRole.h"
#include "Styling/SlateBrush.h"
#include "InteractButtonInfo.generated.h"

USTRUCT(BlueprintType)
struct FInteractButtonInfo: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractButtonID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType InteractionInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush Icon;

	UPROPERTY(EditAnywhere)
	EButtonType CancelButtonType;

	UPROPERTY(EditAnywhere)
	EButtonType SecondaryActionButtonType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush AttackIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush AbilityIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush ThumbJoystickUnpressedIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush ThumbJoystickPressedIcon;

public:
	DEADBYDAYLIGHT_API FInteractButtonInfo();
};

FORCEINLINE uint32 GetTypeHash(const FInteractButtonInfo) { return 0; }
