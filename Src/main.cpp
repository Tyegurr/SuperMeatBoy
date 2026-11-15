#include <Windows.h>
#include "GSuperMeatBoy.h"
#include <Engine.h>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	if (lpCmdLine && !strcmp(lpCmdLine, "-buildloc"))
	{
		LoadLocalizationDatabase("locdb.txt"); // TODO: Decompile me!
		return 0;
	}
	
	GSuperMeatBoy* game = new GSuperMeatBoy(lpCmdLine);
	TEngine* engine = new TEngine(lpCmdLine);
	
	engine->Run();
	return 0;
}