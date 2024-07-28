#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "RoleSelectionScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API URoleSelectionScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnEventButtonClick();

	UFUNCTION()
	void OnChangeUserButtonClick();

	UFUNCTION()
	void OnButtonSelected(int32 buttonId);

public:
	URoleSelectionScreen();
};

FORCEINLINE uint32 GetTypeHash(const URoleSelectionScreen) { return 0; }
