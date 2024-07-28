#pragma once

#include "CoreMinimal.h"
#include "EPlatformFlag.generated.h"

UENUM()
enum class EPlatformFlag : int64
{
	None,
	Android,
	DMM,
	IOS = 4,
	Switch = 8,
	PS4 = 16,
	Steam = 32,
	WinGDK = 64,
	Xbox = 128,
	Stadia = 512,
	PS5 = 1024,
	XSX = 2048,
	Epic = 4096,
};
