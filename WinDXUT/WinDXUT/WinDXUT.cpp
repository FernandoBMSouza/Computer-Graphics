#include "DXUT.h"

int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	MSG msg;
	Window* window = new Window();

	window->Mode(WINDOWED);
	window->Size(640, 480);
	window->Color(0, 0, 0);
	window->Title("Aplicação");
	window->Icon(IDI_3D_ICON);
	window->Cursor(IDC_GREEN_CURSOR);
	window->Create();

	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg); 
		DispatchMessage(&msg);
	}

	delete window;
	return 0;
}