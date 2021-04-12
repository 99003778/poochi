#include "calculator.h"
#include <gtest/gtest.h>
TEST(Calculator,DefaultConstructor) {
    Calculator<int> intCalc(num1,num2);
    Calculator<float> floatCalc(num_float1,num_float2);
    Calculator<double> doubleCalc(num_double1,num_double2);
    
     EXPECT_EQ(25,intCalc.add(12,13));
     EXPECT_EQ(3.0,intCalc.add(1.5,1.5));
   
   
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}