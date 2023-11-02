#ifndef _CANMSG_H_
#define _CANMSG_H_

/*INPUTS*/


/*OUTPUTS*/
typedef enum teCANMSG_BTMSStateCommand {
    CANMSG_BTMS_STATE_CMD_OFF = 0x0,
    CANMSG_BTMS_STATE_CMD_ON = 0x1,
    CANMSG_BTMS_STATE_CMD_FAULT = 0x3,
} tCANMSG_BTMSStateCommand;

typedef enum teCANMSG_BTMSModeCommand {
    CANMSG_BTMS_MODE_CMD_PASIF = 0x0,
    CANMSG_BTMS_STATE_CMD_SOGUTMA = 0x1,
    CANMSG_BTMS_STATE_CMD_ISITMA = 0x2,
} tCANMSG_BTMSModeCommand;

typedef enum teCANMSG_RequestHVContactor {
    CANMSG_HV_CONTACTOR = 0x0,
    CANMSG_HV_CONTACTOR = 0x1,
} tCANMSG_RequestHVContactor;

typedef enum teCANMSG_BTMSCoolantLevelCritical_PP {
    teCANMSG_BTMSCoolantLevelCritical_PP = 0x2,
} tCANMSG_BTMSCoolantLevelCritical_PP;

typedef struct tsCANMSG_Results {
    tCANMSG_BTMSStateCommand CANMSG_BTMSStateCommand;
    tCANMSG_BTMSModeCommand CANMSG_BTMSModeCommand;
    tCANMSG_RequestHVContactor CANMSG_RequestHVContactor;
    tCANMSG_BTMSCoolantLevelCritical_PP CANMSG_BTMSCoolantLevelCritical_PP;
} tCANMSG_Results;


extern tCANMSG_Results tCANMSG_Results;
extern CANMSG_SetupUnit(void);


#endif //_CANMSG_H_