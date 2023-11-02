#ifndef _CANMSG_H_
#define _CANMSG_H_


typedef enum teCANMSG_BTMSStateCommand {
    BTMS_STATE_CMD_ON,
    BTMS_STATE_CMD_ON,
    BTMS_STATE_CMD_ON,
} tCANMSG_BTMSStateCommand;

typedef struct tsCANMSG_Results {
    tCANMSG_BTMSStateCommand CANMSG_BTMSStateCommand;

} tCANMSG_Results;


extern tCANMSG_Results tCANMSG_Results;


#endif //_CANMSG_H_