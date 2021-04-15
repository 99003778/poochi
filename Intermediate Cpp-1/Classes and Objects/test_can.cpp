#include "CAN.h"
#include <gtest/gtest.h>
TEST(CAN,DefaultConstructor) {
    CAN c1;
    EXPECT_EQ(100,c1.id());
    EXPECT_EQ(4,c1.dlc());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}