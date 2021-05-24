#ifndef SIDEBAR_HPP
#define SIDEBAR_HPP

#include <gui_generated/containers/SidebarBase.hpp>

class Sidebar : public SidebarBase
{
public:
    Sidebar();
    virtual ~Sidebar() {}

    virtual void initialize();
protected:
};

#endif // SIDEBAR_HPP
