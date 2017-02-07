#include <swt.hpp>

using namespace swt;

int main()
{
    Display display;
    Shell shell { &display };
    shell.show();
    return display.readAndDispatch();
}
