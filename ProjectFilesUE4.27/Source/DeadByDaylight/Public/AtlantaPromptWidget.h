#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPromptType.h"
#include "AtlantaPromptWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaPromptWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	UTextBlock* PromptLabel;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<EPromptType, FString> AudioCues;

public:
	UAtlantaPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaPromptWidget) { return 0; }
