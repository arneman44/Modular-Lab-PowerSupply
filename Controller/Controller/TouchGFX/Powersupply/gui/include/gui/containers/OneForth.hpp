#ifndef ONEFORTH_HPP
#define ONEFORTH_HPP

#include <gui_generated/containers/OneForthBase.hpp>

class OneForth : public OneForthBase
{
public:
    OneForth();
    virtual ~OneForth() {}

    virtual void initialize();
protected:
};

#endif // ONEFORTH_HPP
