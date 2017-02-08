#ifndef SWT_PLUS_PLUS_CONTROL_HPP
#define SWT_PLUS_PLUS_CONTROL_HPP

#include "../graphics/Point.hpp"
#include "../graphics/Rectangle.hpp"
#include "../graphics/Region.hpp"
#include "Composite.hpp"

namespace swt
{
    class Control : public Widget
    {
    public:
        Control(Composite* parent) : Widget(parent, SWT::NONE)
        {
            setParent(parent);
        }

        Control(Composite* parent, int style) : Widget(parent, style)
        {
            setParent(parent);
        }

        Point computeSize(int wHint, int hHint);
        Point computeSize(int wHint, int hHint, boolean changed);
        bool forceFocus();
        int getBorderWidth() const;
        Rectangle getBounds() const;
        bool getEnabled() const;
        Point getLocation() const;
        int getOrientation() const;
        Composite* getParent() const override;
        void setParent(Composite* parent);
    };
}

#endif //SWT_PLUS_PLUS_CONTROL_HPP
