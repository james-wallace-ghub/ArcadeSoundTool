////////////////////////////////////////////////////////////////////////////////
// Filename: applicationclass.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _APPLICATIONCLASS_H_
#define _APPLICATIONCLASS_H_

///////////////////////
// MY CLASS INCLUDES //
///////////////////////
#include "SoundTool.h"

/////////////
// GLOBALS //
/////////////
#define FULL_SCREEN false
#define VSYNC_ENABLED true
#define SCREEN_DEPTH = 1000.0f;
#define SCREEN_NEAR = 0.1f;

////////////////////////////////////////////////////////////////////////////////
// Class name: ApplicationClass
////////////////////////////////////////////////////////////////////////////////
class ApplicationClass
{
public:

	ApplicationClass();
	ApplicationClass(const ApplicationClass&);
	~ApplicationClass();

	bool Initialize(HINSTANCE, HWND, int, int);
	void Shutdown();
	bool Frame();

	SndTool* GetSnd();

private:

	SndTool* m_Snd;
	int m_screenWidth, m_screenHeight;

};

#endif