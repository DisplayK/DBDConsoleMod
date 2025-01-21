#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TokenCounter.generated.h"

UCLASS(BlueprintType, DefaultToInstanced, EditInlineNew)
class DEADBYDAYLIGHT_API UTokenCounter : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_TokenCount, Transient, meta=(AllowPrivateAccess=true))
	int32 _tokenCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _maxTokenCount;

private:
	UFUNCTION()
	void OnRep_TokenCount(int32 oldCount);

public:
	UFUNCTION(BlueprintPure)
	int32 GetTokenCount() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxTokenCount() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetTokenCount(int32 value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetMaxTokenCount(int32 value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_IncrementToken();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DecrementToken();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTokenCounter();
};

FORCEINLINE uint32 GetTypeHash(const UTokenCounter) { return 0; }
