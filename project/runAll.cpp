#include <gtest/gtest.h>
#include "Glo_def.h"
#include "TestForMakefile.hpp"
#include "FindLuckyNumber.hpp"
class TestGame : public ::testing::Test{
public:
  void SetUp()
  {
  }
  void TearDown()
  {
  }
};

TEST(TestGame, GivenANewClass_WhenCallOnlyFuntion_ThenRuturn0)
{
  TestForMakefile* pTestForMakefile = new TestForMakefile();
  int returnValue = pTestForMakefile->testBuildSuccess();
  EXPECT_EQ(0,returnValue);
  delete pTestForMakefile;
}

TEST(TestGame, GivenSeveralInput_WhenLuckyNumIsFourAndSeven_ThenTestMinCount)
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

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}     
