#include "DBDCurrencyConversionTunables.h"

UDBDCurrencyConversionTunables::UDBDCurrencyConversionTunables()
{
	this->Currencies = TMap<ECurrencyType, FCurrencyConversion>();
}
