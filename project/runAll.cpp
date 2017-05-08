#include <gtest/gtest.h>
#include "TestForMakefile.hpp"
class TestGame : public ::testing::Test{
public:
  void SetUp()
  {
  }
  void TearDown()
  {
  }
};

TEST(TestGame, testForbuild)
{

}
TEST(TestGame, GivenANewClass_WhenCallOnlyFuntion_ThenRuturn0)
{
  TestForMakefile* pTestForMakefile = new TestForMakefile();
  int returnValue = pTestForMakefile->testBuildSuccess();
  EXPECT_EQ(1,returnValue);
  delete pTestForMakefile;
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}     
