#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "TextBlockOverrideProperties.h"
#include "DBDTextBlock.generated.h"

class USwitchDockStateManager;
class UDBDTextManager;

UCLASS()
class UDBDTextBlock : public UTextBlock
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FString TextStyle;

protected:
	UPROPERTY(Transient)
	USwitchDockStateManager* _switchDockStateManager;

	UPROPERTY(Transient)
	UDBDTextManager* _textManager;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	bool _isUpperCase;

	UPROPERTY(EditInstanceOnly)
	bool _hasLargeText;

	UPROPERTY(EditInstanceOnly)
	FTextBlockOverrideProperties _largeTextProperties;

	UPROPERTY(EditInstanceOnly)
	bool _overrideUndockedPropertiesWithLargeText;

	UPROPERTY(EditInstanceOnly)
	bool _hasUndocking;

	UPROPERTY(EditInstanceOnly)
	FTextBlockOverrideProperties _undockedProperties;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsUpperCase(bool isUpperCase);

protected:
	UFUNCTION()
	void PreviewUndocked();

	UFUNCTION()
	void PreviewLargeText();

	UFUNCTION()
	void OnSwitchDockStateChanged(bool isDocked);

	UFUNCTION()
	void OnLargeTextSettingsChanged(bool isLargeText);

public:
	UFUNCTION(BlueprintPure)
	bool GetIsUpperCase() const;

public:
	UDBDTextBlock();
};

FORCEINLINE uint32 GetTypeHash(const UDBDTextBlock) { return 0; }
