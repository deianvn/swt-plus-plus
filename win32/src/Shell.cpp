#include "swt/widgets/Shell.hpp"

#include <iostream>
#include <exception>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>

namespace swt
{
    LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

    Shell::Shell(Display* display) : Widget(nullptr), display(display)
    {
        createWindow();
    }

    Shell::Shell(Display* display, Widget* parent) : Widget(parent), display(display)
    {
        createWindow();
    }

    void Shell::show()
    {
        ShowWindow(hWnd, startupInfo.wShowWindow);
        UpdateWindow(hWnd);
    }

    void Shell::setVisible(bool visible)
    {

    }

    Display* Shell::getDisplay() const
    {
        return display;
    }

    void Shell::createWindow()
    {
        TCHAR szWindowClass[] = _T("win32app");
        TCHAR szTitle[] = _T("Win32 Guided Tour Application");

        HINSTANCE hInstance = GetModuleHandle(NULL);
        GetStartupInfo(&startupInfo);

        WNDCLASSEX wcex;

        wcex.cbSize = sizeof(WNDCLASSEX);
        wcex.style          = CS_HREDRAW | CS_VREDRAW;
        wcex.lpfnWndProc    = WndProc;
        wcex.cbClsExtra     = 0;
        wcex.cbWndExtra     = 0;
        wcex.hInstance      = hInstance;
        wcex.hIcon          = LoadIcon(hInstance, IDI_APPLICATION);
        wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
        wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
        wcex.lpszMenuName   = NULL;
        wcex.lpszClassName  = szWindowClass;
        wcex.hIconSm        = LoadIcon(wcex.hInstance, IDI_APPLICATION);

        if (!RegisterClassEx(&wcex))
        {
            MessageBox(NULL,
                _T("Call to RegisterClassEx failed!"),
                _T("Win32 Guided Tour"),
                NULL);
            std::cout << "Error1";
            throw std::exception {};
        }

        hWnd = CreateWindow(
            szWindowClass,
            szTitle,
            WS_OVERLAPPEDWINDOW,
            CW_USEDEFAULT, CW_USEDEFAULT,
            500, 100,
            NULL,
            NULL,
            hInstance,
            NULL
        );

        if (!hWnd)
        {
            MessageBox(NULL,
                _T("Call to CreateWindow failed!"),
                _T("Win32 Guided Tour"),
                NULL);

            throw std::exception {};
        }
    }

    LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
    {
        switch (message)
        {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
            break;
        }

        return 0;
    }
}
