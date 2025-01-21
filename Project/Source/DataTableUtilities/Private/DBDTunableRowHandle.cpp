#include "DBDTunableRowHandle.h"

FDBDTunableRowHandle::FDBDTunableRowHandle()
{
	this->_dataTableRowHandle = FDataTableRowHandle{};
	this->_defaultValue = 0.0f;
}
