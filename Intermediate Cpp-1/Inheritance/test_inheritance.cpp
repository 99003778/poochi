#include "inheritance.h"
#include <gtest/gtest.h>

TEST(account,DefaultConstructor) {
    AccountBase A1("XXX","XYZ",100);
    EXPECT_EQ(100,A1.getBalance());
   // EXPECT_EQ(10100,A1.debit(10000));
    //EXPECT_EQ(8100,A1.credit(2000));
    EXPECT_EQ("XXX",A1.accNum());
    EXPECT_EQ("XYZ",A1.accName());

   // EXPECT_STREQ("XYZ",A1.accName());

}
TEST(account2,DefaultConstructor2) {
    SavingsAccount S1("XXX","XYZ",100);
    EXPECT_EQ(100,S1.getBalance());
    EXPECT_EQ(10100,S1.debit(10000));
    EXPECT_EQ(8100,S1.credit(2000));
    EXPECT_EQ("XXX",S1.accNum());
    EXPECT_EQ("XYZ",S1.accName());

   // EXPECT_STREQ("XYZ",A1.accName());

}
TEST(account3,DefaultConstructor3) {
    CreditAccount C1("XXX","XYZ",100);
    EXPECT_EQ(100,C1.getBalance());
    EXPECT_EQ(-9900,C1.debit(10000));
    EXPECT_EQ(-7900,C1.credit(2000));
    EXPECT_EQ("XXX",C1.accNum());
    EXPECT_EQ("XYZ",C1.accName());

   // EXPECT_STREQ("XYZ",A1.accName());

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}