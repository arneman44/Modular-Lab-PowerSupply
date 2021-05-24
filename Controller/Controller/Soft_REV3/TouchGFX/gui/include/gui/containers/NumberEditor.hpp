#ifndef NUMBEREDITOR_HPP
#define NUMBEREDITOR_HPP

#include <gui_generated/containers/NumberEditorBase.hpp>

class NumberEditor : public NumberEditorBase
{
public:
    NumberEditor();
    virtual ~NumberEditor() {}

    virtual void initialize();
protected:
};

#endif // NUMBEREDITOR_HPP
