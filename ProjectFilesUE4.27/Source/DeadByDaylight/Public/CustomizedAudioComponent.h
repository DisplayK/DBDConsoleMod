#pragma once

#include "CoreMinimal.h"
#include "CustomizedAudioChangedDelegate.h"
#include "Components/ActorComponent.h"
#include "EAudioCustomizationCategory.h"
#include "CustomizedAudioComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCustomizedAudioComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOutfitCustomizedAudioChangedDelegate, const FName&, outfitAudioStateCollection);

public:
	UPROPERTY(BlueprintAssignable)
	FCustomizedAudioChangedDelegate OnCustomizedAudioSwitchStateChanged;

	UPROPERTY(BlueprintAssignable)
	FOutfitCustomizedAudioChangedDelegate OnOutfitCustomizedAudioStateCollectionChanged;

private:
	UPROPERTY(EditAnywhere)
	FString AudioCharacterNameDefaultSwitchState;

	UPROPERTY(EditAnywhere)
	FString AudioCharacterSubNameDefaultSwitchState;

	UPROPERTY(EditAnywhere)
	FString AudioCharacterHeadDefaultSwitchState;

	UPROPERTY(EditAnywhere)
	FString AudioCharacterClothesDefaultSwitchState;

	UPROPERTY(EditAnywhere)
	FString AudioCharacterShoesDefaultSwitchState;

	UPROPERTY(EditAnywhere)
	FString AudioCharacterWeaponDefaultSwitchState;

	UPROPERTY(EditAnywhere)
	FString AudioCharacterAmbianceDefaultSwitchState;

	UPROPERTY(EditAnywhere)
	FString AudioCharacterStateDefaultSwitchState;

	UPROPERTY(EditAnywhere)
	FName AudioCharacterDefaultOutfitCollectionState;

public:
	UFUNCTION(BlueprintPure)
	FName GetOutfitCustomizedAudioCollectionState() const;

	UFUNCTION(BlueprintPure)
	FString GetAudioSwitchState(EAudioCustomizationCategory audioCustomizationCategory) const;

public:
	UCustomizedAudioComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizedAudioComponent) { return 0; }
