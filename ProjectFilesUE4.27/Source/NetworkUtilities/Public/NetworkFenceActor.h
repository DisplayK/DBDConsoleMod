#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "NetworkFenceActor.generated.h"

UCLASS()
class NETWORKUTILITIES_API ANetworkFenceActor : public AActor
{
	GENERATED_BODY()

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ClientPassedFence(const TArray<FGuid>& Fences);

	UFUNCTION(Client, Reliable, WithValidation)
	void Client_AllPassedFence(const TArray<FGuid>& Fences);

public:
	ANetworkFenceActor();
};

FORCEINLINE uint32 GetTypeHash(const ANetworkFenceActor) { return 0; }
