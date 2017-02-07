#ifndef SWT_PLUS_PLUS_DISPLAY_HPP
#define SWT_PLUS_PLUS_DISPLAY_HPP

#include "../graphics/Device.hpp"

#include <gtkmm.h>
#include <vector>

namespace swt
{
    class Shell;

    class Display : public Device {
    public:
        Display()
        {
            app = Gtk::Application::create();
        }

        int readAndDispatch();
        const std::vector<Shell*>& getShells();
        Shell* getCurrentShell();
        void setCurrentShell(Shell* shell);
        void addShell(Shell* shell);

        void setGtkmmWindow(Gtk::Window& window)
        {
            gtkmmWindow = &window;
        }
    private:
        std::vector<Shell*> shells {};
        Shell* currentShell { nullptr };

        Glib::RefPtr<Gtk::Application> app;
        Gtk::Window* gtkmmWindow;
    };
}

#endif //SWT_PLUS_PLUS_DISPLAY_HPP
