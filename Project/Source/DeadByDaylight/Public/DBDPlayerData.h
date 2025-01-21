#pragma once

#include "CoreMinimal.h"
#include "YawAndPitchRotator_NetQuantize16.h"
#include "Components/ActorComponent.h"
#include "EInputInteractionType.h"
#include "UObject/NoExportTypes.h"
#include "DBDPlayerData.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDPlayerData : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemUseButtonStateChanged, bool, isPressed);

public:
	UPROPERTY(BlueprintAssignable)
	FOnItemUseButtonStateChanged OnItemUseButtonStateChanged;

private:
	UPROPERTY(Replicated)
	FYawAndPitchRotator_NetQuantize16 _controlRotation;

public:
	UFUNCTION(BlueprintCallable)
	void SetRenderingFeaturesCompleted();

	UFUNCTION(BlueprintCallable)
	void SetLoadoutSpawned();

	UFUNCTION(BlueprintCallable)
	void SetIntroCompleted();

	UFUNCTION(BlueprintCallable)
	void SetCampaignDataSynced();

public:
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_SetIntroCompleted();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_RenderingFeaturesCompleted();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_LoadoutSpawned();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_CampaignDataSynced();

public:
	UFUNCTION(BlueprintCallable)
	bool IsLoadoutSpawned() const;

	UFUNCTION(BlueprintCallable)
	bool IsIntroCompleted();

	UFUNCTION(BlueprintPure)
	bool IsInteractionInputPressed(EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintCallable)
	bool IsCampaignDataSynced() const;

	UFUNCTION(BlueprintPure)
	bool GetUseInputPressed() const;

	UFUNCTION(BlueprintPure)
	FRotator GetControlRotation() const;

	UFUNCTION(BlueprintCallable)
	bool DidRenderingFeaturesComplete() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDBDPlayerData();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPlayerData) { return 0; }
