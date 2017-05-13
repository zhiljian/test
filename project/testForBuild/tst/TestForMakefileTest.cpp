#include <gtest/gtest.h>
#include "Glo_def.h"
#include "TestForMakefile.hpp"
class TestForMakefileTest : public ::testing::Test{
public:
  void SetUp()
  {
  }
  void TearDown()
  {
  }
};

TEST(TestForMakefileTest, GivenTestFunction_WhenRuturnZero_ThenCaseFail)
{
  TestForMakefile instance;
  int checkValue = 1;
  EXPECT_EQ(checkValue, instance.testBuildSuccess());
}
