#pragma once

#include "CoreMinimal.h"
#include "ENavigationScreenButton.generated.h"

UENUM(BlueprintType)
enum class ENavigationScreenButton : uint8
{
	AddCurrency,
	Back,
	Bloodweb,
	ChangeRole,
	CharacterSelection,
	Customization,
	InviteFriend,
	Loadout,
	Start,
	Subscriptions,
	EditCustomGame,
	CustomGameRequestRole,
};
