#include "BeMaterialEditorHelper.h"
#include "BeMaterialScalar.h"
#include "BeMaterialTexture.h"
#include "BeMaterialVector.h"

class UTexture;
class UMaterialInstanceConstant;

UTexture* UBeMaterialEditorHelper::ReloadTexture(UTexture* InTexture, const FString& InSourceName)
{
	return NULL;
}

void UBeMaterialEditorHelper::EditMaterialConstant(UMaterialInstanceConstant* InMaterialInstance, TArray<FBeMaterialScalar> InScalars, TArray<FBeMaterialVector> InVectors, TArray<FBeMaterialTexture> InTextures)
{

}

UBeMaterialEditorHelper::UBeMaterialEditorHelper()
{

}
