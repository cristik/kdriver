#include "StdAfx.h"
#include "KDriverService.h"
#include <winioctl.h>
#include <Ntsecapi.h>
#include "../../../kdriver/kdriver.h"

bool KDriverService::startFiltering(void)
{
	return false;
}

bool KDriverService::stopFiltering(void)
{
	return false;
}
