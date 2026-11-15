#pragma once
#include "../ResizeableArray.h"

class ExplodeStringData
{
public:
	ExplodeStringData();
	~ExplodeStringData();

	char* operator[](unsigned int idx);
};

bool ExplodeString(char delimeter, const char* str, ExplodeStringData* out); 