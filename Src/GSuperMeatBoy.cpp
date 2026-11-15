#include "GSuperMeatBoy.h"
#include <Win32/TString.h>

GSuperMeatBoy* GSuperMeatBoy::SuperMeatBoy = NULL;

GSuperMeatBoy::GSuperMeatBoy(LPSTR lpCmdLine)
{
	SuperMeatBoy = this;

	if (!lpCmdLine) return;

	ExplodeStringData* cmdLineArgs = NULL;
	ExplodeString(' ', lpCmdLine, cmdLineArgs);
}