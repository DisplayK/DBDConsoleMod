#pragma once

#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDGame_Menu.generated.h"

class ALevelSequenceActor;
class UAtlantaPartyFlowHandler;

UCLASS(NonTransient)
class ADBDGame_Menu : public ADBDBaseGameMode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StartWithSlasher;

private:
	UPROPERTY(Transient)
	UAtlantaPartyFlowHandler* _partyFlowHandler;

	UPROPERTY(Transient)
	ALevelSequenceActor* _sequenceFadeActor;

	UPROPERTY(Transient)
	ALevelSequenceActor* _sequenceIntroActor;

	UPROPERTY(Transient)
	ALevelSequenceActor* _sequenceLoopActor;

public:
	ADBDGame_Menu();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGame_Menu) { return 0; }
