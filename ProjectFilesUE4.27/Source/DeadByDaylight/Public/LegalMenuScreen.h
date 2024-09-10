#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "LegalMenuScreen.generated.h"

UCLASS()
class ULegalMenuScreen : public UScreenBase
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnOkClick();

	UFUNCTION()
	void OnDeclineClick();

	UFUNCTION()
	void OnAcceptClick();

public:
	ULegalMenuScreen();
};

FORCEINLINE uint32 GetTypeHash(const ULegalMenuScreen) { return 0; }
