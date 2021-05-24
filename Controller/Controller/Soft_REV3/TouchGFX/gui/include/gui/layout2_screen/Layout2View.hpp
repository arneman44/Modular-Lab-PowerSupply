#ifndef LAYOUT2VIEW_HPP
#define LAYOUT2VIEW_HPP

#include <gui_generated/layout2_screen/Layout2ViewBase.hpp>
#include <gui/layout2_screen/Layout2Presenter.hpp>

class Layout2View : public Layout2ViewBase
{
public:
    Layout2View();
    virtual ~Layout2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LAYOUT2VIEW_HPP
