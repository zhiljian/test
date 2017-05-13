#include <gtest/gtest.h>
#include "Glo_def.h"
#include "FindLuckyNumber.hpp"

class FindLuckyNumberTest : public ::testing::Test{
public:
  void SetUp()
  {
  }
  void TearDown()
  {
  }
};

TEST(FindLuckyNumberTest, GivenSeveralInput_WhenLuckyNumIsFourAndSeven_ThenTestMinCount)
{
  u32 input = 4;
  FindLuckyNumber instance;
  instance.inputOneNumber(input);
  u32 minCount = instance.findMinCount();
  EXPECT_EQ(1, minCount);

  input = 7;
  instance.inputOneNumber(input);
  minCount = instance.findMinCount();
  EXPECT_EQ(1, minCount);

  input = 18;
  instance.inputOneNumber(input);
  minCount = instance.findMinCount();
  EXPECT_EQ(2, minCount);

  input = 0;
  instance.inputOneNumber(input);
  minCount = instance.findMinCount();
  EXPECT_EQ(-1, minCount);

  input = 30;
  instance.inputOneNumber(input);
  minCount = instance.findMinCount();
  EXPECT_EQ(5, minCount);

  input = 23137;
  instance.inputOneNumber(input);
  minCount = instance.findMinCount();
  EXPECT_EQ(1, minCount);

}

