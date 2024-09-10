#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "RevealOptions.h"
#include "SourceBasedOutlineUpdateStrategy.generated.h"

class AActor;
class ADBDPlayer;
class UObject;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USourceBasedOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _defaultColorForSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _defaultColorForSlasher;

public:
	UFUNCTION(BlueprintCallable)
	void ResetReveal();

	UFUNCTION(BlueprintCallable)
	void RemoveRevealSource(const UObject* source);

	UFUNCTION(BlueprintCallable)
	void ChangeDefaultColorForSurvivor(const FLinearColor newColor);

	UFUNCTION(BlueprintCallable)
	void ChangeDefaultColorForSlasher(const FLinearColor newColor);

	UFUNCTION(BlueprintCallable)
	void AddTimedReveal(const UObject* source, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float duration);

	UFUNCTION(BlueprintCallable)
	void AddTimedAndRangedReveal(const UObject* source, const AActor* sourceActor, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float duration, float range);

	UFUNCTION(BlueprintCallable)
	void AddRevealWithOptions(const UObject* source, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, FRevealOptions options);

	UFUNCTION(BlueprintCallable)
	void AddReveal(const UObject* source, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters);

	UFUNCTION(BlueprintCallable)
	void AddRangedReveal(const UObject* source, const AActor* sourceActor, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float range);

public:
	USourceBasedOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USourceBasedOutlineUpdateStrategy) { return 0; }
