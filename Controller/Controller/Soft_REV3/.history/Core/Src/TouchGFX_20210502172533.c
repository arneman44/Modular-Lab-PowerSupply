
typedef enum
{
    CTPressDown,
    CTLiftUp,
    CTContact,
    CTNoEvent
}CTTouchType;

uint8_t TouchPointBaseAddr[10] = {
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
void GetTouchPoint(I2C_HandleTypeDef* hi2c,uint8_t I2Caddr,uint8_t PointNR){
    uint8_t I2CBuffer[5];
    HAL_I2C_Master_Transmit(hi2c,I2Caddr,TouchPointBaseAddr[PointNR],1,100);
    HAL_I2C_Master_Receive(hi2c,I2Caddr,&I2CBuffer,5,100);
    printf("I2C Readout %d %d %d %d %d",I2CBuffer[0],I2CBuffer[1],I2CBuffer[2],I2CBuffer[3],I2CBuffer[4]);
}





//Returns the Number off current touchpoints

uint8_t GetNrTouchPoint(uint8_t I2Caddr){


}
