#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S33P03.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US33P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _skillCheckTriggerPercentPerToken;

	UPROPERTY(EditDefaultsOnly)
	float _skillCheckCursorSpeedPerToken;

	UPROPERTY(EditDefaultsOnly)
	float _skillCheckBonusPercentPerToken;

public:
	UFUNCTION(BlueprintCallable)
	float GetSkillCheckTriggerPercentPerToken();

	UFUNCTION(BlueprintCallable)
	float GetSkillCheckCursorSpeedPerToken();

	UFUNCTION(BlueprintCallable)
	float GetSkillCheckBonusPercentPerTokenAtLevel();

public:
	US33P03();
};

FORCEINLINE uint32 GetTypeHash(const US33P03) { return 0; }
