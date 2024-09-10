#pragma once

#include "CoreMinimal.h"
#include "AuthorityDiscernedCharacter.generated.h"

class ACharacter;

USTRUCT()
struct FAuthorityDiscernedCharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ACharacter* _character;

	UPROPERTY(Transient)
	bool _isSighted;

public:
	GAMEPLAYUTILITIES_API FAuthorityDiscernedCharacter();
};

FORCEINLINE uint32 GetTypeHash(const FAuthorityDiscernedCharacter) { return 0; }
