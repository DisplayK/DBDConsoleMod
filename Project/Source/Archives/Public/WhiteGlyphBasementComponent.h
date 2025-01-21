#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WhiteGlyphBasementComponent.generated.h"

class AGlyph;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphBasementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReadyForInteractionDelegate);

public:
	UPROPERTY(BlueprintAssignable)
	FOnReadyForInteractionDelegate OnReadyForInteraction;

protected:
	UPROPERTY(EditDefaultsOnly)
	float _basementGlyphInteractionCoolDownTime;

protected:
	UFUNCTION(BlueprintPure)
	AGlyph* GetOwningGlyph() const;

public:
	UWhiteGlyphBasementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWhiteGlyphBasementComponent) { return 0; }
