#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "OfferingRevealDelays.h"
#include "OfferingSequenceAssets.generated.h"

class AOfferingCard;
class UOfferingCardAnim;

UCLASS()
class AOfferingSequenceAssets : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float SpaceBetweenCards;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<AOfferingCard> DefaultCardClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UOfferingCardAnim> DefaultCardAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<FOfferingRevealDelays> OfferingRevealDelays;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	AActor* CardsParent;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void PlaySmoke();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayFadeOut();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayFadeIn();

public:
	AOfferingSequenceAssets();
};

FORCEINLINE uint32 GetTypeHash(const AOfferingSequenceAssets) { return 0; }
