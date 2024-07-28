#pragma once

#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "AspectRatioBox.generated.h"

UCLASS()
class DBDUIVIEWSCORE_API UAspectRatioBox : public UContentWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AspectRatio;

	UPROPERTY(EditAnywhere)
	uint8 IsAspectRatioOverridden : 1;

public:
	UFUNCTION(BlueprintCallable)
	void SetAspectRatio(float inAspectRatio);

	UFUNCTION(BlueprintCallable)
	void ClearAspectRatio();

public:
	UAspectRatioBox();
};

FORCEINLINE uint32 GetTypeHash(const UAspectRatioBox) { return 0; }
