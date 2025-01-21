#pragma once

#include "CoreMinimal.h"
#include "EInteractionPromptType.h"
#include "InputCoreTypes.h"
#include "InteractionPromptViewData.generated.h"

USTRUCT(BlueprintType)
struct FInteractionPromptViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInteractionPromptType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FKey InputKey1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FKey InputKey2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FKey InputKey3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FKey InputKey4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool PlaceInCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAvailable;

public:
	DBDUIVIEWINTERFACES_API FInteractionPromptViewData();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionPromptViewData) { return 0; }
