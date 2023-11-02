#include "BTMS.h"

struct sBTMS_Params {
    int16_t MyCellValue;
} BTMS_Params;

uint8_t CellMinTemp(uint8_t CellValue)
{
    CellValue = CellValue & 0x0F;
    BTMS_Params.MyCellValue = CellValue;
    return BTMS_Params.MyCellValue;
}



bool BTMS_WakeUpStartandECPFan(bool input)
{
    if(input) {
        return true;
    }
    else {
        return false;
    }
}