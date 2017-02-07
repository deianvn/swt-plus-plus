#ifndef SWT_PLUS_PLUS_SHELL_HPP
#define SWT_PLUS_PLUS_SHELL_HPP

#include "Display.hpp"
#include "Widget.hpp"

namespace swt
{
    class Shell : public Widget
    {
    public:
        Shell(const Display& display) : Widget(display) {};
        void show();
        void setVisible(bool visible);
    };
}

#endif //SWT_PLUS_PLUS_SHELL_HPP
