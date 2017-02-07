#include "swt/widgets/Display.hpp"

namespace swt
{
    int Display::readAndDispatch()
    {
        return app->run(*gtkmmWindow);
    }

    const std::vector<Shell*>& Display::getShells()
    {
        return shells;
    }

    Shell* Display::getCurrentShell()
    {
        return currentShell;
    }

    void Display::setCurrentShell(Shell* shell)
    {
        currentShell = shell;
    }

    void Display::addShell(Shell* shell)
    {
        shells.push_back(shell);
    }
}
