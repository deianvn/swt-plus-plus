#ifndef SWT_PLUS_PLUS_WIDGET_HPP
#define SWT_PLUS_PLUS_WIDGET_HPP

#include "SWT.hpp"
#include "Display.hpp"

namespace swt
{
    class Widget
    {
    public:
        Widget(Widget* parent) : parent(parent) {}
        Widget(Widget* parent, int style) : parent(parent) {}

        virtual ~Widget() {}
        virtual Widget* getParent() const;
        virtual Display* getDisplay() const;
        int getStyle() const { return style; };
    private:
        Widget* parent { nullptr };
        int style { SWT::NONE };
    };
}

#endif //SWT_PLUS_PLUS_WIDGET_HPP
