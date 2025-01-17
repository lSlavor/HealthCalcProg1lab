#pragma once

#ifdef BUILDING_DLL
	#define DLL_API __declspec(dllexport)
#else
	#define DLL_API __declspec(dllimport)
#endif

extern "C" DLL_API BOOL HCUI_CreateMainWindow(HINSTANCE hInstance, HWND& hWnd);