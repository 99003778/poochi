#include "Complex.h"
#include <gtest/gtest.h>
TEST(complex,DefaultConstructor) 
{
    complex<int> c1(2,2),c2(4,3),c;
    c=c1+c2;
    EXPECT_EQ(6,c.return_real_value());
    EXPECT_EQ(5,c.return_imag_value());
    c=c1-c2;
    EXPECT_EQ(-2,c.return_real_value());
    EXPECT_EQ(-1,c.return_imag_value());
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}