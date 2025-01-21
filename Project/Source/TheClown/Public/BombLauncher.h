#pragma once

#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "EBombType.h"
#include "BombLauncher.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBombLauncher : public UKillerProjectileLauncher
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _speedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _pitchCurve;

private:
	UPROPERTY(Replicated)
	EBombType _currentBombType;

public:
	UFUNCTION(BlueprintCallable)
	void SetProjectileSpeedCurve(UCurveFloat* newProjectileSpeedCurve);

	UFUNCTION(BlueprintCallable)
	void SetProjectilePitchCurve(UCurveFloat* newProjectilePitchCurve);

	UFUNCTION(BlueprintCallable)
	void SetPercentThrowStrength(float throwStrength);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SwitchBombType();

	UFUNCTION(BlueprintCallable)
	void LocalLaunch(float percentThrowStrength);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Local_SwitchBombType();

	UFUNCTION(BlueprintPure)
	bool IsBombFullyCharged() const;

	UFUNCTION(BlueprintPure)
	float GetPercentThrowStrenght() const;

	UFUNCTION(BlueprintPure)
	EBombType GetCurrentBombType() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBombLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UBombLauncher) { return 0; }
