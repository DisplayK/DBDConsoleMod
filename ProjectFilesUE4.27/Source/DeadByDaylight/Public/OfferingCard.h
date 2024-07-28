#pragma once

#include "CoreMinimal.h"
#include "RarityTexture.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "OfferingTypeTexture.h"
#include "EOfferingAnimState.h"
#include "OfferingCard.generated.h"

class UOfferingCardAnim;

UCLASS()
class DEADBYDAYLIGHT_API AOfferingCard : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FRarityTexture> _rarityTextures;

	UPROPERTY(EditAnywhere)
	TArray<FOfferingTypeTexture> _offeringTypeTextures;

public:
	UFUNCTION(BlueprintPure)
	bool IsRevealed() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void HandleStateChanged(EOfferingAnimState state);

	UFUNCTION(BlueprintImplementableEvent)
	void HandleCardDissolved();

public:
	UFUNCTION(BlueprintPure)
	EOfferingAnimState GetState() const;

	UFUNCTION(BlueprintPure)
	UOfferingCardAnim* GetCardAnimation() const;

	UFUNCTION(BlueprintCallable)
	void ChangeState(EOfferingAnimState state);

	UFUNCTION(BlueprintCallable)
	void ChangeAnimationClass(const TSubclassOf<UOfferingCardAnim>& animationClass);

public:
	AOfferingCard();
};

FORCEINLINE uint32 GetTypeHash(const AOfferingCard) { return 0; }
