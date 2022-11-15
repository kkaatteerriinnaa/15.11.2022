#include <windows.h>
#include <tchar.h>
#include "resource.h"

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

LONG WINAPI WndProc(HWND hwnd, UINT Message, WPARAM wparam, LPARAM lparam)
{
	switch (Message) {
	case WM_COMMAND:
		// Если мы нажали на checkbox'е.
		if (LOWORD(wparam) == 10001)
		{
			// Получаем HWND нашего chechbox'а.
			HWND hwndCheck = GetDlgItem(hwnd, 10001);
			// Выясняем текущее состояние chechbox'а.
			LRESULT res = SendMessage(hwndCheck, BM_GETCHECK, 0, 0);
			// Если галочка стоит.
			if (res == BST_CHECKED)
			{
				SetWindowText(hwnd, L"Checked");
			}
			// Если галочка не стоит.
			if (res == BST_UNCHECKED)
			{
				SetWindowText(hwnd, L"Unchecked");
			}
		}

	}
	return 0;
}
