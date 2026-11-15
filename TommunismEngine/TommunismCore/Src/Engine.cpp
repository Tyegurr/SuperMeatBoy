#include "../Inc/Engine.h"
#include "../Inc/Win32/TString.h"

TEngine* TEngine::Engine = NULL;

void TEngine::EngineRun()
{
}

TEngine::TEngine(LPSTR cmdLineArgs)
{
	m_unkF = 1.0f;
	m_unkI = 0;
	m_unkI2 = 0;
	m_unkI3 = 0;

	Engine = this;

	ExplodeStringData* cmdLineArgsExploded = NULL;
	ExplodeString(' ', cmdLineArgs, cmdLineArgsExploded);

	// cleanup
	delete cmdLineArgsExploded;
}

void TEngine::Run()
{
	bool Running = true;

	#ifdef _WIN32
	MSG msg;

	PeekMessageA(&msg, NULL, 0, 0, 0);
	Running = true;
	while (Running)
	{
		if (PeekMessage(&msg, NULL, 0, 0, 1u) /*|| *(_DWORD *)(*(this + 12) + 4) == 1*/)
		{
			if (msg.message == 18 /*|| *(_DWORD *)(*(this + 12) + 4) == 1*/)
				Running = false;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else if (false/*Keyboard && sub_48EF20(104) == 1 && (sub_48EF20(107) == 2 || sub_48EF20(64) == 2)*/)
		{
			PostQuitMessage(0);
		}
		else
		{
			EngineRun();
		}
	}
	#endif
}

void LoadLocalizationDatabase(LPCSTR fileName)
{
}