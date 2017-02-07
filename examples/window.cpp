#include <swt.hpp>

using namespace swt;

int main(int argc, char *argv[])
{
    Display display {};
    Shell shell { &display };
    shell.show();
    return display.readAndDispatch();
}
