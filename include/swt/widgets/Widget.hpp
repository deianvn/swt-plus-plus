#ifndef SWT_PLUS_PLUS_WIDGET_HPP
#define SWT_PLUS_PLUS_WIDGET_HPP

#include "Display.hpp"

namespace swt
{
    class Widget
    {
    public:
        Widget(const Display& display) : display(display) {}
        virtual ~Widget() {}
        Display& getDisplay();
    private:
        const Display& display;
    };
}

#endif //SWT_PLUS_PLUS_WIDGET_HPP
