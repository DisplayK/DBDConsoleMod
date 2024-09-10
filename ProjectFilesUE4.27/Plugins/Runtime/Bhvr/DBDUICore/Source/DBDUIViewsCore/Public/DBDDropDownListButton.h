#pragma once

#include "CoreMinimal.h"
#include "CoreTabWidget.h"
#include "DBDDropDownListButton.generated.h"

UCLASS(EditInlineNew)
class UDBDDropDownListButton : public UCoreTabWidget
{
	GENERATED_BODY()

public:
	UDBDDropDownListButton();
};

FORCEINLINE uint32 GetTypeHash(const UDBDDropDownListButton) { return 0; }
