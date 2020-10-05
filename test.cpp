#include "gtest/gtest.h"
#include "library.h"

TEST(BaseTest, Dummy) {
  ASSERT_TRUE(true);
}

TEST(BaseTest, PrintTest) {
    EXPECT_EQ(printMessage(), 0);
}