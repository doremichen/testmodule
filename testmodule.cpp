/*
 * test module
 *
 */
#define LOG_NDEBUG 0 
#define LOG_TAG "testmodule"
#include <utils/Log.h>

#include "testmodule.h"
 

Test::Test()
{
  ALOGV("[%s] enter.\n", __FUNCTION__);      
}

Test::~Test()
{
  ALOGV("[%s] enter.\n", __FUNCTION__);  
}                    

void Test::foo()
{
  ALOGV("[%s] enter.\n", __FUNCTION__);         
        
}        
