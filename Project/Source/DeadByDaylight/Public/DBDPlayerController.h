#pragma once

#include "CoreMinimal.h"
#include "DBDPlayerControllerBase.h"
#include "OnPawnLeavingGameDelegate.h"
#include "OnLocallyObservedChangedDelegate.h"
#include "EPlayerRole.h"
#include "DBDPlayerController.generated.h"

class APawn;
class UDBDBaseInputHandler;
class ADBDPlayer;
class ADBDPlayerState;
class ANetworkFenceActor;

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerController : public ADBDPlayerControllerBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnPawnLeavingGameDelegate OnPawnLeavingGame;

	UPROPERTY(BlueprintAssignable)
	FOnLocallyObservedChangedDelegate OnLocallyObservedChanged;

public:
	UPROPERTY(ReplicatedUsing=OnRep_Fence, Transient, BlueprintReadWrite, EditAnywhere)
	ANetworkFenceActor* _theFence;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	UDBDBaseInputHandler* _inputHandler;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	APawn* _aiPawn;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EPlayerRole _controllerGameRole;

public:
	UFUNCTION(BlueprintCallable)
	void SetShouldMoveInputReplicateToServer(bool shouldReplicate);

	UFUNCTION(Server, Unreliable, WithValidation, BlueprintCallable)
	void ServerViewPlayer(const FString& playerName);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState);

public:
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_SetSpectatorMode(bool on);

public:
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_SetReadyToTravel();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_SetHasMoveInputThisFrame(bool hasMoveInputThisFrame);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_RequestEndGame();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_LeaveGame(bool joiningLobby);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_DebugSend(const FString& data);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ActivateAIAll(bool activate, int32 playerRank, int8 playerRole);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_ActivateAI(bool activate, int32 playerRank);

public:
	UFUNCTION(BlueprintCallable)
	void OnRep_Fence();

public:
	UFUNCTION(BlueprintPure)
	bool MobileJoystickInput_Pressed(int32 joystickIndex) const;

	UFUNCTION(BlueprintPure)
	bool IsSpectating() const;

	UFUNCTION(BlueprintCallable)
	void ImplementRunLockMechanic();

	UFUNCTION(BlueprintPure)
	ADBDPlayerState* GetSpectatedPlayerState() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetSpectatedPlayer() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetControlledPlayer() const;

	UFUNCTION(BlueprintPure)
	APawn* GetAIPawn() const;

public:
	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_SpectateAI(APawn* aiPawn);

public:
	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState);

	UFUNCTION(Client, Reliable, BlueprintCallable)
	void Client_SetSpectatorMode(bool on);

	UFUNCTION(BlueprintCallable)
	void ActivateAI(bool activate, int32 playerRank);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayerController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerController) { return 0; }
