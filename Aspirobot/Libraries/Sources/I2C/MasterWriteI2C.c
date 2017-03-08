/************************************************************************
*    Function Name:  MasterWriteI2C
*    Description:    This routine is used to write a byte to the I2C bus.
*                    The input parameter data_out is written to the 
*                    I2CTRN register. If IWCOL bit is set,write collision 
*                    has occured and -1 is returned, else 0 is returned.
*    Parameters:     unsigned char : data_out
*    Return Value:   unsigned int
*************************************************************************/

#include "i2c.h"

#ifdef _MI2CIF

char MasterWriteI2C(unsigned char data_out)
{
    I2CTRN = data_out;

    if(I2CSTATbits.IWCOL)        /* If write collision occurs,return -1 */
        return -1;
    else
    {
        return 0;
    }
}

#else
#warning "Does not build on this target"
#endif
