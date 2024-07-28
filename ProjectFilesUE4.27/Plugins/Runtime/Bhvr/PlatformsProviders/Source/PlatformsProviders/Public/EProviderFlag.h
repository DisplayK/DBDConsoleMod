#pragma once

#include "CoreMinimal.h"
#include "EProviderFlag.generated.h"

UENUM()
enum class EProviderFlag : int64
{
	None,
	Google,
	DMM,
	Facebook = 4,
	Nintendo = 8,
	PSN = 16,
	Steam = 32,
	WinGDK = 64,
	Xbox = 128,
	Apple = 256,
	Kraken = 512,
	Stadia = 2048,
	GAS3 = 16384,
	Epic = 32768,
};
