#ifndef SWT_PLUS_PLUS_DISPLAY_HPP
#define SWT_PLUS_PLUS_DISPLAY_HPP

#include "../graphics/Device.hpp"

#include <vector>

namespace swt
{
    class Shell;

    using ShellsList = std::vector<Shell*>;

    class Display : public Device {
    public:
        int readAndDispatch();
        const ShellsList& getShells();
        Shell* getCurrentShell();
    };
}

#endif //SWT_PLUS_PLUS_DISPLAY_HPP
