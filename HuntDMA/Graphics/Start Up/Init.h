#pragma once
#pragma comment(lib, "d2d1.lib")
#pragma comment(lib, "Dwrite")
#pragma comment(lib, "windowscodecs.lib")

const bool enableAimBot = false;

void CleanD2D();
void InitD2D(HWND hWnd);
void RenderFrame();

extern int FrameRate();