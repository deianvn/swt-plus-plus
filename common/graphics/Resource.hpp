#ifndef SWT_PLUS_PLUS_RESOURCE_H
#define SWT_PLUS_PLUS_RESOURCE_H

#include "Device.hpp"

class Resource {
public:
    Resource(Device& device) : device(device) {}
    int readAndDispatch();
    virtual ~Resource();
    
    const Device& device;
private:
};

#endif //SWT_PLUS_PLUS_RESOURCE_H
