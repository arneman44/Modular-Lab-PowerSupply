#ifndef LAYOUTSELECTIONVIEW_HPP
#define LAYOUTSELECTIONVIEW_HPP

#include <gui_generated/layoutselection_screen/LayoutSelectionViewBase.hpp>
#include <gui/layoutselection_screen/LayoutSelectionPresenter.hpp>

class LayoutSelectionView : public LayoutSelectionViewBase
{
public:
    LayoutSelectionView();
    virtual ~LayoutSelectionView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LAYOUTSELECTIONVIEW_HPP
