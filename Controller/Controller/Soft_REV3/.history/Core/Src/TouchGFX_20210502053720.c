#include "stm32f7xx_hal_i2c.h"


typedef enum
{
    CTPressDown,
    CTLiftUp,
    CTContact,
    CTNoEvent
}CTTouchType;

//Gets Touch point From I2C Touch panel and Returns The Coordinates and TouchType it via the pointer
/*
Notes:
I2C address 0x38

*/
void GetTouchPoint(I2C_HandleTypeDef* hi2c,uint8_t I2Caddr,uint8_t PointNR,uint16_t* TouchPointX,uint16_t* TouchPointY,CTTouchType* TouchType){
    HAL_I2C_Master_Receiver

}





//Returns the Number off current touchpoints

uint8_t GetNrTouchPoint(uint8_t I2Caddr){


}