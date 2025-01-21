#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "CreditsPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UCreditsPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CreditsScreenWidgetClass;

private:
	UFUNCTION()
	void OnBackAction();

public:
	UFUNCTION(Exec)
	void Credits_ScrollToName(const FString& name, float delay);

	UFUNCTION(Exec)
	void Credits_ScrollToEnd();

public:
	UCreditsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UCreditsPresenter) { return 0; }
