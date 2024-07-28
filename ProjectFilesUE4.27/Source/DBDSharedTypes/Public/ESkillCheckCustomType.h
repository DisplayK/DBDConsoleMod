#pragma once

#include "CoreMinimal.h"
#include "ESkillCheckCustomType.generated.h"

UENUM(BlueprintType)
enum class ESkillCheckCustomType : uint8
{
	VE_None,
	VE_OnPickedUp,
	VE_OnAttacked,
	VE_DecisiveStrikeWhileWiggling,
	VE_GeneratorOvercharge1,
	VE_GeneratorOvercharge2,
	VE_GeneratorOvercharge3,
	VE_BrandNewPart,
	VE_Struggle,
	VE_OppressionPerkGeneratorKicked,
	VE_SoulChemical,
	VE_Wiggle,
	VE_YellowGlyph,
	VE_K27P03Continuous,
};
