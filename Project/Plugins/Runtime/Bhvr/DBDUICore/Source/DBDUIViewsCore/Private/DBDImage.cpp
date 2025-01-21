#include "DBDImage.h"
#include "UObject/SoftObjectPtr.h"

class UTexture2D;

void UDBDImage::SetBrushFromTextureWithDefault(UTexture2D* texture, bool matchSize)
{

}

void UDBDImage::SetBrushFromSoftTextureWithDefault(TSoftObjectPtr<UTexture2D> softTexture, bool matchSize)
{

}

UDBDImage::UDBDImage()
{
	this->DefaultImage = NULL;
}
