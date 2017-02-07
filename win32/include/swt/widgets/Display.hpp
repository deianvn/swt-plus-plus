#ifndef SWT_PLUS_PLUS_DISPLAY_HPP
#define SWT_PLUS_PLUS_DISPLAY_HPP

#include "../graphics/Device.hpp"

namespace swt
{
    class Display : public Device {
    public:
        int readAndDispatch();
    };
}

#endif //SWT_PLUS_PLUS_DISPLAY_HPP
