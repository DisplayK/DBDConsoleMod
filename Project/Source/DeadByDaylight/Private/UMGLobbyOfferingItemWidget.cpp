#include "UMGLobbyOfferingItemWidget.h"
#include "UObject/SoftObjectPtr.h"

class UTexture2D;

void UUMGLobbyOfferingItemWidget::HideOfferingItem()
{

}

TMap<FName, TSoftObjectPtr<UTexture2D>> UUMGLobbyOfferingItemWidget::GetOfferingIcons()
{
	return TMap<FName, TSoftObjectPtr<UTexture2D>>();
}

UUMGLobbyOfferingItemWidget::UUMGLobbyOfferingItemWidget()
{

}
