#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGGridPageScrollWidget.h"
#include "CharacterSlotData.h"
#include "UMGCharacterPageScrollWidget.generated.h"

class UUMGCharacterButton;

UCLASS(EditInlineNew)
class UUMGCharacterPageScrollWidget : public UUMGGridPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGCharacterButton> _characterButtonWidgetClass;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FCharacterSlotData> _charactersData;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isKiller;

	UPROPERTY(BlueprintReadOnly)
	FText _charactersTitleText;

	UPROPERTY(BlueprintReadOnly)
	FText _killersTitleText;

	UPROPERTY(BlueprintReadOnly)
	FText _survivorsTitleText;

protected:
	UFUNCTION()
	void HandleCharacterClicked(int32 characterIndex);

public:
	UUMGCharacterPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterPageScrollWidget) { return 0; }
