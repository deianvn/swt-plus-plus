#include "swt/widgets/Display.hpp"

#include <windows.h>
#include <iostream>

namespace swt
{
    int Display::readAndDispatch()
    {
        std::cout << "Read and dispatch";
        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        return static_cast<int>(msg.wParam);
    }
}
