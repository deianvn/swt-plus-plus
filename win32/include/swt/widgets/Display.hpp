#ifndef SWT_PLUS_PLUS_DISPLAY_HPP
#define SWT_PLUS_PLUS_DISPLAY_HPP

#include "../graphics/Device.hpp"

#include <vector>

class Shell;

namespace swt
{
    class Display : public Device {
    public:
        int readAndDispatch();
        const std::vector<Shell>& getShells();
        Shell* getCurrentShell();
        void setCurrentShell(Shell* shell);
        void addShell(Shell* shell);
    private:
        std::std::vector<Shell> shells {};
        Shell* currentShell { nullptr };
    };
}

#endif //SWT_PLUS_PLUS_DISPLAY_HPP
