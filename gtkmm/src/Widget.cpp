#include "swt/widgets/Widget.hpp"

namespace swt
{
    Widget* Widget::getParent() const
    {
        return parent;
    }

    Display* Widget::getDisplay() const
    {
        Widget* w = parent;
        while (w->parent != nullptr) w = w->parent;
        return w->getDisplay();
    }

    int Widget::getStyle() const
    {
        return 0;
    }
}
