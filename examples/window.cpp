#include <swt.hpp>

using namespace swt;

int main()
{
    Display display;
    Shell shell { display };
    return display.readAndDispatch();
}
