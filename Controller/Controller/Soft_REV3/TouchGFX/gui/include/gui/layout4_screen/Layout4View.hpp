#ifndef LAYOUT4VIEW_HPP
#define LAYOUT4VIEW_HPP

#include <gui_generated/layout4_screen/Layout4ViewBase.hpp>
#include <gui/layout4_screen/Layout4Presenter.hpp>

class Layout4View : public Layout4ViewBase
{
public:
    Layout4View();
    virtual ~Layout4View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LAYOUT4VIEW_HPP
