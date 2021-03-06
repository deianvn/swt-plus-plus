#include "swt/widgets/Display.hpp"

#include <windows.h>
#include <iostream>

namespace swt
{
    int Display::readAndDispatch()
    {
        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        return static_cast<int>(msg.wParam);
    }

    const std::vector<Shell>& Display::getShells()
    {
        return shells;
    }

    Shell* Display::getCurrentShell()
    {
        return currentShell;
    }

    void Display::setCurrentShell(Shell* shell)
    {
        currentShell = shell;
    }

    void Display::addShell(Shell* shell)
    {
        shells.push_back(*shell);
    }
}
