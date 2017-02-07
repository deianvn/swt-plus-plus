#ifndef SWT_PLUS_PLUS_SHELL_HPP
#define SWT_PLUS_PLUS_SHELL_HPP

#include "Display.hpp"
#include "Widget.hpp"

#include <windows.h>

namespace swt
{
    class Shell : public Widget
    {
    public:
        Shell(Display* display);
        Shell(Display* display, Widget* parent);
        void show();
        void setVisible(bool visible);
        Display* getDisplay() const override;
    private:
        Display* display;
        HWND hWnd;
        STARTUPINFO startupInfo;

        void createWindow();
    };
}

#endif //SWT_PLUS_PLUS_SHELL_HPP
