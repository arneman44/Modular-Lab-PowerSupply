#include "stm32f7xx_hal.h"
#include "CTTouch.h"

typedef enum
{
    CTPressDown,
    CTLiftUp,
    CTContact,
    CTNoEvent
}CTTouchType;


const uint8_t TouchPointBaseAddr[10] = {
    0x03,
    0x09,
    0x0F,
    0x15,
    0x1B,
    0x21,
    0x27,
    0x2D,
    0x33,
    0x39
};

//Gets Touch point From I2C Touch panel and Returns The Coordinates and TouchType it via the pointer
/*
Notes:
I2C address 0x38

*/
void GetTouchPoint(I2C_HandleTypeDef* hi2c,uint8_t I2Caddr,uint8_t PointNR,uint16_t* TouchPointX,uint16_t* TouchPointY,uint8_t* TouchType,uint8_t* TouchPressure){
    uint8_t I2CBuffer[5],I2CTransmit;
	I2CTransmit = 0x03;
    HAL_I2C_Master_Transmit(hi2c,I2Caddr*2,&I2CTransmit,1,100);
    HAL_I2C_Master_Receive(hi2c,(I2Caddr*2)+1,&I2CBuffer,5,100);
	//Get Event Flag from Buffer
	*TouchType = (I2CBuffer[0] & 0xC0) >> 6;
	*TouchPointX = ((I2CBuffer[0] & 0x0F) << 8) | I2CBuffer[1];
	*TouchPointY = ((I2CBuffer[2] & 0x0F) << 8) | I2CBuffer[3];
	*TouchPressure = I2CBuffer[3];
	//Debug
	printf("TouchPoint:%d X:%d Y%d Type:%d Pressure:%d\n\r",PointNR,*TouchPointX,*TouchPointY,*TouchType,*TouchPressure);
}
