#include "S3MirrorsDefaultRetryPolicyConfig.h"

FS3MirrorsDefaultRetryPolicyConfig::FS3MirrorsDefaultRetryPolicyConfig()
{
	this->Enabled = false;
	this->RetryCount = 0;
	this->Timeout = 0;
}
