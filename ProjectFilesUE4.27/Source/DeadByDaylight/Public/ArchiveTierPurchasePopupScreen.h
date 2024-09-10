#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "ArchiveTierPurchasePopupScreen.generated.h"

UCLASS()
class UArchiveTierPurchasePopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnConfirmPurchase(int32 tiersToPurchaseNumber);

public:
	UArchiveTierPurchasePopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveTierPurchasePopupScreen) { return 0; }
