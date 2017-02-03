#ifndef SWT_PLUS_PLUS_SHELL_HPP
#define SWT_PLUS_PLUS_SHELL_HPP

#include "Display.hpp"
#include "Widget.hpp"

class Shell : public Widget {
public:
    explicit Shell(const Display& display) : Widget(display);
    void show();
    void setVisible(bool visible);
};

#endif //SWT_PLUS_PLUS_SHELL_HPP
