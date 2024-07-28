#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingLanguageContextWidget.generated.h"

class UUMGSettingContextButton;
class UScrollBox;

UCLASS(Abstract, EditInlineNew)
class UUMGSettingLanguageContextWidget : public UUMGSettingContextWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScrollBox* LanguageScrollBox;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGSettingContextButton> _languageButtonClass;

	UPROPERTY(EditAnywhere)
	int32 _languageListRowGap;

private:
	UPROPERTY(Transient, Export)
	UUMGSettingContextButton* _selectedLanguageButton;

public:
	UUMGSettingLanguageContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingLanguageContextWidget) { return 0; }
