#include "Fraction.h"

#include <gtest/gtest.h>

TEST(Fraction,DefaultConstructor)

{

Fraction<int> c1(1,4),c2(2,3),c3;

c3=c1+c2;

EXPECT_EQ(11,c3.return_numerator_value());

EXPECT_EQ(12,c3.return_denominator_value());

c3=c1-c2;

EXPECT_EQ(-5,c3.return_numerator_value());

EXPECT_EQ(12,c3.return_denominator_value());

c3=c1*c2;

EXPECT_EQ(2,c3.return_numerator_value());

EXPECT_EQ(12,c3.return_denominator_value());

c3=c1/c2;

EXPECT_EQ(3,c3.return_numerator_value());

EXPECT_EQ(8,c3.return_denominator_value());

}

int main(int argc, char **argv) {

testing::InitGoogleTest(&argc, argv);

return RUN_ALL_TESTS();

}