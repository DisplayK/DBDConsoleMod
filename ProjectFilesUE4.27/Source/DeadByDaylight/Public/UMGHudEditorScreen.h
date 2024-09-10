#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPlayerRole.h"
#include "UMGHudEditorScreen.generated.h"

class UAkAudioEvent;
class UUMGHudEditorLayoutScreen;
class UUMGHudEditorVersionWidget;
class UUMGHudEditorLayoutWidget;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorScreen : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UUMGHudEditorLayoutWidget* _hudEditorLayoutWidget;

	UPROPERTY(Transient, Export)
	UUMGHudEditorVersionWidget* _versionSwapWidget;

	UPROPERTY(Transient, Export)
	TMap<EPlayerRole, UUMGHudEditorLayoutScreen*> _storedLayoutScreens;

	UPROPERTY(Transient, Export)
	UUMGHudEditorLayoutScreen* _currentLayoutScreen;

	UPROPERTY(Transient)
	UAkAudioEvent* _onDropOverlapSound;

public:
	UFUNCTION(BlueprintCallable)
	void ShowHudLayout(EPlayerRole role);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetWidgets(UUMGHudEditorLayoutWidget* hudEditorLayoutWidget, UUMGHudEditorVersionWidget* versionSwapWidget);

	UFUNCTION(BlueprintCallable)
	void SetEditorDropErrorOverlapSound(UAkAudioEvent* onDropOverlapSound);

	UFUNCTION(BlueprintCallable)
	void RegisterEditorLayoutScreen(EPlayerRole role, UUMGHudEditorLayoutScreen* screen);

	UFUNCTION(BlueprintCallable)
	void Quit();

	UFUNCTION(BlueprintPure)
	UUMGHudEditorVersionWidget* GetVersionSwapWidget() const;

public:
	UUMGHudEditorScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHudEditorScreen) { return 0; }
