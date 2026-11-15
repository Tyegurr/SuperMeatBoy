#pragma once
#include <Windows.h>

class TEngine
{
private:
	void EngineRun();
public:
	TEngine(LPSTR cmdLineArgs);

	void Run();

	float m_unkF;
	int m_unkI;
	int m_unkI2;
	int m_unkI3;


	static TEngine* Engine;
	static int detailLevel;
	static bool bIgnoreFragmentCache;
};

// other engine functions that don't need to be in the class
void LoadLocalizationDatabase(LPCSTR fileName);