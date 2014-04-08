/*
 * test main
 *
 */

#define LOG_TAG "testMain"
#include <utils/Log.h>

#include "testmodule.h"
 

int main(int argc, char *argv[])
{
    ALOGV("[%s] enter.\n", __FUNCTION__);
    
    Test *pTest = new Test;
    
    pTest->foo();
    
    delete pTest;
    
    
    return 0 ;   
}            
