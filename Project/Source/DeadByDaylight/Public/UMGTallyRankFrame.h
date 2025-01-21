#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPlayerRole.h"
#include "UMGTallyRankFrame.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyRankFrame : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* Frame;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Label;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(int32 rank, EPlayerRole playerRole);

public:
	UUMGTallyRankFrame();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyRankFrame) { return 0; }
