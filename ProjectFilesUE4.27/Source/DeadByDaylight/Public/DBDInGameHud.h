#pragma once

#include "CoreMinimal.h"
#include "DBDBaseHud.h"
#include "DBDInGameHud.generated.h"

class UFont;
class UCompetenceDebugger;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDInGameHud : public ADBDBaseHud
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UFont* _debugFontObj;

	UPROPERTY(Transient)
	UCompetenceDebugger* _competenceDebugger;

public:
	ADBDInGameHud();
};

FORCEINLINE uint32 GetTypeHash(const ADBDInGameHud) { return 0; }
