#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EMainMenuButton.h"
#include "MainMenuButtonData.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuButtonData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMainMenuButton ButtonType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText InfoTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LockedInfoTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDisabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHidden;

public:
	DEADBYDAYLIGHT_API FMainMenuButtonData();
};

FORCEINLINE uint32 GetTypeHash(const FMainMenuButtonData) { return 0; }
