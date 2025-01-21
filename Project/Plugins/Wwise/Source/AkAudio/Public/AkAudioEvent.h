#pragma once

#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "UObject/SoftObjectPtr.h"
#include "AkAudioEvent.generated.h"

class UAkAssetPlatformData;
class UAkAudioBank;

UCLASS(BlueprintType)
class AKAUDIO_API UAkAudioEvent : public UAkAssetBase
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;

	UPROPERTY(EditAnywhere)
	UAkAudioBank* RequiredBank;

private:
	UPROPERTY(Transient)
	UAkAssetPlatformData* CurrentLocalizedPlatformData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float MaxAttenuationRadius;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool IsInfinite;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float MinimumDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float MaximumDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetMinimumDuration() const;

	UFUNCTION(BlueprintPure)
	float GetMaximumDuration() const;

	UFUNCTION(BlueprintPure)
	float GetMaxAttenuationRadius() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInfinite() const;

public:
	UAkAudioEvent();
};

FORCEINLINE uint32 GetTypeHash(const UAkAudioEvent) { return 0; }
