#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EConnectionQuality.h"
#include "PingStatusViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPingStatusViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPingStatusViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLocalPingStatus(const EConnectionQuality& localPing);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLocalPacketLossStatus(const EConnectionQuality& localPacketLoss);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetKillerConnectionQualityStatus(const EConnectionQuality& killerConnectionQuality);

};
