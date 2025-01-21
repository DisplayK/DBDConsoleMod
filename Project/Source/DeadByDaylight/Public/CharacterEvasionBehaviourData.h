#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "CharacterEvasionBehaviourData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UCharacterEvasionBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _hunter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _escapePoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minEscapeDist;

public:
	UFUNCTION(BlueprintCallable)
	void Init(AActor* hunter, TArray<AActor*> escapePoints, float minEscapeDist);

public:
	UCharacterEvasionBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterEvasionBehaviourData) { return 0; }
