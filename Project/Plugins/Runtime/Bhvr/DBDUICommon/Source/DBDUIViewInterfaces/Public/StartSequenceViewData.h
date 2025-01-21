#pragma once

#include "CoreMinimal.h"
#include "EThemeColorId.h"
#include "StartSequenceViewData.generated.h"

USTRUCT(BlueprintType)
struct FStartSequenceViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ThemeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EThemeColorId ThemeColorId;

public:
	DBDUIVIEWINTERFACES_API FStartSequenceViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStartSequenceViewData) { return 0; }
