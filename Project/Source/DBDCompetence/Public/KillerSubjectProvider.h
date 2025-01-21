#pragma once

#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "KillerSubjectProvider.generated.h"

class ASlasherPlayer;

UCLASS()
class UKillerSubjectProvider : public UModifierSubjectProvider
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void RegisterWhenKillerSet(ASlasherPlayer* killer);

public:
	UKillerSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const UKillerSubjectProvider) { return 0; }
