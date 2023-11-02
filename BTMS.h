#ifndef _BTMS_H_
#define _BTMS_H_

#include "Libraries.h"

/*typedef struct tsBTMS_Results{
	uint16_t SumCellValue;
} tBTMS_Results;*/


//extern tBTMS_Results BTMS_Results;

extern uint8_t CellMinTemp(uint8_t CellValue);
extern bool BTMS_WakeUpStartandECPFan(bool input);

#endif //_BTMS_H_