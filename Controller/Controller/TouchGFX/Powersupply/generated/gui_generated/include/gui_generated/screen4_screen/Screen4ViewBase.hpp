/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN4VIEWBASE_HPP
#define SCREEN4VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen4_screen/Screen4Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <gui/containers/Sidebar.hpp>
#include <gui/containers/OneForth.hpp>

class Screen4ViewBase : public touchgfx::View<Screen4Presenter>
{
public:
    Screen4ViewBase();
    virtual ~Screen4ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box Background;
    Sidebar sidebar;
    OneForth oneForth1;
    OneForth oneForth1_2;
    OneForth oneForth1_3;
    OneForth oneForth1_1;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 15360;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN4VIEWBASE_HPP
