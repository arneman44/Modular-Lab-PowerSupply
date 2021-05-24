#ifndef SETTINGSCHANNELVIEW_HPP
#define SETTINGSCHANNELVIEW_HPP

#include <gui_generated/settingschannel_screen/SettingsChannelViewBase.hpp>
#include <gui/settingschannel_screen/SettingsChannelPresenter.hpp>

class SettingsChannelView : public SettingsChannelViewBase
{
public:
    SettingsChannelView();
    virtual ~SettingsChannelView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SETTINGSCHANNELVIEW_HPP
