#include "DigitalInputs.h"

struct sDigitalInputs {
    bool FlashSwitchSignal;
    bool AutoLightButton;
    bool HazarButton;
    bool EmergencySwitchSignal;
} DigitalInputs;

bool DIGITALINPUTS_IgnitionCheck(bool input)
{   
    if(input){
        return true;
    }
    else {
        return false;
    }
}

#endif //_DIGITALINPUTS_H_