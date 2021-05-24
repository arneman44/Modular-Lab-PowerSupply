#ifndef LAYOUT2PRESENTER_HPP
#define LAYOUT2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Layout2View;

class Layout2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Layout2Presenter(Layout2View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Layout2Presenter() {};

private:
    Layout2Presenter();

    Layout2View& view;
};

#endif // LAYOUT2PRESENTER_HPP
