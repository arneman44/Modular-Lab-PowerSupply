/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef HALFVERTBASE_HPP
#define HALFVERTBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/graph/GraphScroll.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/mixins/ClickListener.hpp>

class HalfVertBase : public touchgfx::Container
{
public:
    HalfVertBase();
    virtual ~HalfVertBase() {}
    virtual void initialize();

    /*
     * Virtual Action Handlers
     */
    virtual void SwichPower()
    {
        // Override and implement this function in HalfVert
    }

    virtual void PowerToggle()
    {
        // Override and implement this function in HalfVert
    }

    virtual void SelectAmprage()
    {
        // Override and implement this function in HalfVert
    }

    virtual void SelectVoltage()
    {
        // Override and implement this function in HalfVert
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box Background;
    touchgfx::Box VoltageReadBack;
    touchgfx::Box PowerReadPrimBack;
    touchgfx::Box VoltageSetBack;
    touchgfx::Box AmprageSetBack;
    touchgfx::Box PowerReadSecBack;
    touchgfx::TextAreaWithOneWildcard VoltageRead;
    touchgfx::TextAreaWithOneWildcard PowerReadPrim;
    touchgfx::GraphScroll<201> VoltageGraph;
    touchgfx::GraphElementLine VoltageGraphLine1;
    touchgfx::PainterRGB565 VoltageGraphLine1Painter;
    touchgfx::GraphElementGridX VoltageGraphMinorXAxisGrid;
    touchgfx::GraphElementGridY VoltageGraphMinorYAxisGrid;
    touchgfx::GraphElementGridX VoltageGraphMajorXAxisGrid;
    touchgfx::GraphElementGridY VoltageGraphMajorYAxisGrid;
    touchgfx::GraphScroll<201> PowerGraph;
    touchgfx::GraphElementLine PowerGraphLine1;
    touchgfx::PainterRGB565 PowerGraphLine1Painter;
    touchgfx::GraphElementLine PowerGraphLine2;
    touchgfx::PainterRGB565 PowerGraphLine2Painter;
    touchgfx::GraphElementGridX PowerGraphMinorXAxisGrid;
    touchgfx::GraphElementGridY PowerGraphMinorYAxisGrid;
    touchgfx::GraphElementGridX PowerGraphMajorXAxisGrid;
    touchgfx::GraphElementGridY PowerGraphMajorYAxisGrid;
    touchgfx::ClickListener< touchgfx::TextAreaWithOneWildcard > VoltageSet;
    touchgfx::TextAreaWithOneWildcard AmprageSet;
    touchgfx::TextAreaWithOneWildcard PowerReadSec;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > VoltageSetClick;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > PowerReadSecClick;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > AmprageSetClick;
    touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > > Settings;
    touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ToggleButtonTrigger > > Power;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > PowerReadSecClick_1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t VOLTAGEREAD_SIZE = 5;
    touchgfx::Unicode::UnicodeChar VoltageReadBuffer[VOLTAGEREAD_SIZE];
    static const uint16_t POWERREADPRIM_SIZE = 5;
    touchgfx::Unicode::UnicodeChar PowerReadPrimBuffer[POWERREADPRIM_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<HalfVertBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // HALFVERTBASE_HPP