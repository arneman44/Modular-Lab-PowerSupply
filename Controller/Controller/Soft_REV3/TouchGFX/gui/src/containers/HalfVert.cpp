#include <gui/containers/HalfVert.hpp>

HalfVert::HalfVert()
{

}

void HalfVert::initialize()
{
    HalfVertBase::initialize();
}

void HalfVert::PowerToggle(){
	if(Power.getPressed()){
		uint8_t I2CTransmit[2] = {0x01,255};
		HAL_I2C_Master_Transmit(&hi2c4,0x20,I2CTransmit,2,HAL_MAX_DELAY);
	}else{
		uint8_t I2CTransmit[2] = {0x01,0};
		HAL_I2C_Master_Transmit(&hi2c4,0x20,I2CTransmit,2,HAL_MAX_DELAY);
	}
}
