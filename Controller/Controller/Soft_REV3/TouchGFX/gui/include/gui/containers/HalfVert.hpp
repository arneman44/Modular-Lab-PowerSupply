#ifndef HALFVERT_HPP
#define HALFVERT_HPP

#include <gui_generated/containers/HalfVertBase.hpp>
#include "stm32f7xx_hal.h"
extern I2C_HandleTypeDef hi2c4;

class HalfVert : public HalfVertBase
{
public:
    HalfVert();
    virtual ~HalfVert() {}

    virtual void initialize();

    virtual void PowerToggle();
protected:
};

#endif // HALFVERT_HPP
