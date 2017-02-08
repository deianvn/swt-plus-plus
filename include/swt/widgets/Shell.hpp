#ifndef SWT_PLUS_PLUS_SHELL_HPP
#define SWT_PLUS_PLUS_SHELL_HPP

#include "Display.hpp"
#include "Canvas.hpp"

namespace swt
{
    class Shell : public Canvas
    {
    public:
        Shell(Display* display);
        Shell(Shell* parent);
        void setParent(Shell* parent);
        void show();
        void setVisible(bool visible);
        Display* getDisplay() const override;
    };
}

#endif //SWT_PLUS_PLUS_SHELL_HPP
