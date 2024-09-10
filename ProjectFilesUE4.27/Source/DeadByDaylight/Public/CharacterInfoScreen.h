#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "CharacterInfoScreen.generated.h"

UCLASS()
class UCharacterInfoScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnBackButtonClick();

public:
	UCharacterInfoScreen();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterInfoScreen) { return 0; }
