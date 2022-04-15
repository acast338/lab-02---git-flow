#include "c-echo.h"
#include "c-count.h"
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, MyNameIsAlyssa) {
    char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "My"; test_val[2] = "name"; test_val[3] = "is"; test_val[4] = "Alyssa"; test_val[5] = ".";
    EXPECT_EQ("My name is Alyssa .", echo(6,test_val));
}

TEST(EchoTest, TwoPlusTwoEqualsFour) {
    char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "2"; test_val[2] = "+"; test_val[3] = "2"; test_val[4] = "="; test_val[5] = "4";
    EXPECT_EQ("2 + 2 = 4", echo(6,test_val));
}

TEST(EchoTest, AlyssaIsPerfect) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Alyssa"; test_val[2] = "is"; test_val[3] = "PERFECT!!";
    EXPECT_EQ("Alyssa is PERFECT!!", echo(4,test_val));
}

TEST(CountTest, HelloWorld) {
    std::string test_str = "hello world";
    EXPECT_EQ(2, count(test_str));
}

TEST(CountTest, EmptyString) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(CountTest, ManySpaces) {
    std::string test_str = "   this   string has     weird   spacing";
    EXPECT_EQ(5, count(test_str));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
