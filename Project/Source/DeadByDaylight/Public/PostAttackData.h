#pragma once

#include "CoreMinimal.h"
#include "PostAttackData.generated.h"

USTRUCT()
struct FPostAttackData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool IsOblivious;

	UPROPERTY()
	bool IsKO;

	UPROPERTY()
	bool IsExposed;

	UPROPERTY()
	bool IsPostPhaseWalkAttack;

	UPROPERTY()
	bool IsDownedInDemonMode;

	UPROPERTY()
	bool IsLegionBleedOutAttack;

	UPROPERTY()
	bool IsDemogorgonPounceAttack;

public:
	DEADBYDAYLIGHT_API FPostAttackData();
};

FORCEINLINE uint32 GetTypeHash(const FPostAttackData) { return 0; }
