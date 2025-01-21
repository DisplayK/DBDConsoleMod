#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSoundHudIcon.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPerkSoundHudIcon : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FName PerkID;

public:
	UFUNCTION()
	void ClearPerk();

	UFUNCTION()
	void ActivatePerk(float percentage);

public:
	UPerkSoundHudIcon();
};

FORCEINLINE uint32 GetTypeHash(const UPerkSoundHudIcon) { return 0; }
