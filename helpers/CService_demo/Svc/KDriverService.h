#pragma once
#include "Service.h"

class KDriverService :
	public CService
{
public:
	
	bool startFiltering();
	bool stopFiltering();
};
