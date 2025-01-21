#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DailyRitualPossibleCharacters.generated.h"

USTRUCT(BlueprintType)
struct FDailyRitualPossibleCharacters
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int32> CharacterIDs;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<EPlayerRole> Roles;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<EPlayerRole> SelectOneCharacterFromRoles;

public:
	DEADBYDAYLIGHT_API FDailyRitualPossibleCharacters();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualPossibleCharacters) { return 0; }
