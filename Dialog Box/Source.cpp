#include <windows.h>
#include <tchar.h>
#include "resource.h"

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

LONG WINAPI WndProc(HWND hwnd, UINT Message, WPARAM wparam, LPARAM lparam)
{
	switch (Message) {
	case WM_COMMAND:
		// ���� �� ������ �� checkbox'�.
		if (LOWORD(wparam) == 10001)
		{
			// �������� HWND ������ chechbox'�.
			HWND hwndCheck = GetDlgItem(hwnd, 10001);
			// �������� ������� ��������� chechbox'�.
			LRESULT res = SendMessage(hwndCheck, BM_GETCHECK, 0, 0);
			// ���� ������� �����.
			if (res == BST_CHECKED)
			{
				SetWindowText(hwnd, L"Checked");
			}
			// ���� ������� �� �����.
			if (res == BST_UNCHECKED)
			{
				SetWindowText(hwnd, L"Unchecked");
			}
		}

	}
	return 0;
}
