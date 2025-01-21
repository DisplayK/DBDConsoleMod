#include "BlockableReplicatedDatum.h"

FBlockableReplicatedDatum::FBlockableReplicatedDatum()
{
	this->Sources = TArray<TWeakObjectPtr<UObject>>();
	this->BlockedPlayers = TArray<TWeakObjectPtr<ADBDPlayer>>();
}
