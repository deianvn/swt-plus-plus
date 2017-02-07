#ifndef SWT_PLUS_PLUS_WIDGET_HPP
#define SWT_PLUS_PLUS_WIDGET_HPP

#include "Display.hpp"

namespace swt
{
    class Widget
    {
    public:
        Widget() = default;
        Widget(Widget* parent) : parent(parent) {}
        virtual ~Widget() {}
        Widget* getParent() const;
        virtual Display* getDisplay() const;
        int getStyle() const;
    private:
        Widget* parent { nullptr };
    };
}

#endif //SWT_PLUS_PLUS_WIDGET_HPP
