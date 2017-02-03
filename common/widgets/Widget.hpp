#ifndef SWT_PLUS_PLUS_WIDGET_HPP
#define SWT_PLUS_PLUS_WIDGET_HPP

#include "Display.hpp"

class Widget
{
public:
    Widget(const Display& display) : display(display) {}
    virtual ~Widget() {}
private:
    const Display& display;
};

#endif //SWT_PLUS_PLUS_WIDGET_HPP
