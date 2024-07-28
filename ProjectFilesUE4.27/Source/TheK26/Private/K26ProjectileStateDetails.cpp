#include "K26ProjectileStateDetails.h"

FK26ProjectileStateDetails::FK26ProjectileStateDetails()
{
	this->VisualScaleX = FDBDTunableRowHandle{};
	this->VisualScaleY = FDBDTunableRowHandle{};
	this->VisualScaleZ = FDBDTunableRowHandle{};
	this->HitboxScaleX = FDBDTunableRowHandle{};
	this->HitboxScaleY = FDBDTunableRowHandle{};
	this->HitboxScaleZ = FDBDTunableRowHandle{};
	this->HitBoxStaticMesh = NULL;
	this->DebugColor = FLinearColor{};
}
