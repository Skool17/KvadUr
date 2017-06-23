#include <ctest.h>
#include <../src/diskr.h>

CTEST(Test_1_function, input_2_4_2_0)
{
    float result = function(2,4,2,0);
	
    float expected = -1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_function, input_3_6_3_0)
{
    float result = function(3,6,3,0);
    
    float expected = -1;
    
    ASSERT_DBL_NEAR(expected, result);
}
