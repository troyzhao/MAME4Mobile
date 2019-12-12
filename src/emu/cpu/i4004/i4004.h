#ifndef __I4004_H__
#define __I4004_H__



/***************************************************************************
    CONSTANTS
***************************************************************************/

enum
{
	I4004_PC,
	I4004_A,
	I4004_R01, I4004_R23, I4004_R45, I4004_R67, I4004_R89, I4004_RAB, I4004_RCD, I4004_REF,
	I4004_ADDR1,I4004_ADDR2,I4004_ADDR3,I4004_ADDR4,I4004_RAM,
	I4004_GENPC = STATE_GENPC,
	I4004_GENSP = STATE_GENSP,
	I4004_GENPCBASE = STATE_GENPCBASE
};

/***************************************************************************
    TYPE DEFINITIONS
***************************************************************************/

/***************************************************************************
    FUNCTION PROTOTYPES
***************************************************************************/

DECLARE_LEGACY_CPU_DEVICE(I4004, i4004);

CPU_DISASSEMBLE( i4004 );

void i4004_set_test(running_device *device, UINT8 val);
#endif
