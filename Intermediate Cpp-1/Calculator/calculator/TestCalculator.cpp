#include"Calculator.h"
#include <gtest/gtest.h>
TEST(operation,DefaultConstructor) 
{
     operation<int> c1;
     EXPECT_EQ(5,c1.add(2,3));
     operation<float> c2;
     EXPECT_EQ(6.25,c2.add(1.1,5.15));
     operation<int> c3;
     EXPECT_EQ(-2,c3.subtract(1,3));
     operation<float> c4;
     EXPECT_EQ(0.00999999,c4.subtract(1.12,1.11));
     operation<int> c5;
     EXPECT_EQ(3,c5.multiply(1,3));
     operation<float> c6;
     EXPECT_EQ(3.1,c6.multiply(1.0,3.1));
     operation<int> c7;
     EXPECT_EQ(3,c7.division(3,1));
     
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}