#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "TabWidgetData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTabWidgetData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	int32 Key;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Transient)
	bool HasNotification;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	bool ForcesIconSize;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	FVector2D IconSize;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	FString AnalyticsName;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	bool IsKillSwitchEnabled;

public:
	DBDUIVIEWINTERFACES_API FTabWidgetData();
};

FORCEINLINE uint32 GetTypeHash(const FTabWidgetData) { return 0; }
