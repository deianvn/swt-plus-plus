#include "swt/widgets/Shell.hpp"

namespace swt
{
    Shell::Shell(Display* display) : Widget(nullptr), display(display)
    {
        gtkmmWindow.set_default_size(200, 200);
        display->setCurrentShell(this);
        display->addShell(this);
    }

    Shell::Shell(Display* display, Widget* parent) : Widget(parent), display(display)
    {
        gtkmmWindow.set_default_size(200, 200);
        display->addShell(this);
    }

    void Shell::show()
    {
        gtkmmWindow.show();
    }

    void Shell::setVisible(bool visible)
    {
        if (visible) gtkmmWindow.show();
        else gtkmmWindow.hide();
    }

    Display* Shell::getDisplay() const
    {
        return display;
    }
}
