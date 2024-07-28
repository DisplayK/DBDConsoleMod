#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexPentimento.generated.h"

class ATotem;
class URekindleTotemInteraction;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK26_API UHexPentimento : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSet<FName> _statusEffectNames;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<URekindleTotemInteraction> _rekindleInteractionClass;

	UPROPERTY(Transient)
	TArray<ATotem*> _blockedTotems;

public:
	UHexPentimento();
};

FORCEINLINE uint32 GetTypeHash(const UHexPentimento) { return 0; }
