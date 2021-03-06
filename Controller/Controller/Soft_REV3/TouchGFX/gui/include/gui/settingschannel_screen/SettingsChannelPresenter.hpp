#ifndef SETTINGSCHANNELPRESENTER_HPP
#define SETTINGSCHANNELPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SettingsChannelView;

class SettingsChannelPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SettingsChannelPresenter(SettingsChannelView& v);

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

    virtual ~SettingsChannelPresenter() {};

private:
    SettingsChannelPresenter();

    SettingsChannelView& view;
};

#endif // SETTINGSCHANNELPRESENTER_HPP
