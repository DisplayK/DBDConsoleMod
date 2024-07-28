#pragma once

#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "UMGTallyCharacterProgressionWidget.generated.h"

class UUMGTallyCharacterProgressionBar;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyCharacterProgressionWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTallyCharacterProgressionBar* CharacterProgressionBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextCharacterCurrentExperience;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextExperienceForNextLevel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextExperienceEarned;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextCurrentLevel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CharacterPicture;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PrestigeIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextCharacterName;

	UPROPERTY(EditAnywhere)
	int32 ExperiencePerSecond;

public:
	UFUNCTION(BlueprintCallable)
	void StartSequence();

private:
	UFUNCTION()
	void StartNewLevel();

public:
	UFUNCTION(BlueprintCallable)
	void SetWidgetToFinalState();

private:
	UFUNCTION()
	void OnFullBarOut();

	UFUNCTION()
	void OnFullBarIn();

public:
	UUMGTallyCharacterProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyCharacterProgressionWidget) { return 0; }
