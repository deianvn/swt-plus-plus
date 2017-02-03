//
// Created by DRizov on 10.1.2017 г..
//

#ifndef SWT_PLUS_PLUS_WINDOW_H
#define SWT_PLUS_PLUS_WINDOW_H

#include "Application.h"

class Window {
public:
    Window(const Application& app) noexcept;
    void show() noexcept;
    void setVisible(const bool visible) noexcept;
};

#endif //SWT_PLUS_PLUS_WINDOW_H
