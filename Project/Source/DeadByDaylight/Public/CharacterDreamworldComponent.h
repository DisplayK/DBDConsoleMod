#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DreamStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CharacterDreamworldComponent.generated.h"

class APostProcessUpdate;
class AActor;
class ADBDPlayer;
class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterDreamworldComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FDreamStateChangedDelegate DreamStateChanged;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> _mobileDreamworldPostProcessClass;

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsInDreamworld, Transient)
	bool _isInDreamworld;

	UPROPERTY(Transient)
	APostProcessUpdate* _mobileDreamworldPostProcess;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldShowVignette() const;

private:
	UFUNCTION()
	void OnRep_IsInDreamworld(bool previous);

public:
	UFUNCTION(BlueprintPure)
	bool IsInDreamworld() const;

	UFUNCTION(BlueprintPure)
	static ADBDPlayer* GetLocallyObservedOrLocalCharacter(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable)
	void FireWakeUpScoreEvent(ADBDPlayer* instigator);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsInDreamworld(bool newValue, bool isScripted);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCharacterDreamworldComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterDreamworldComponent) { return 0; }
