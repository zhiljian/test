#include <gtest/gtest.h>
#include "Glo_def.h"
class TestGame1 : public ::testing::Test{
public:
  void SetUp()
  {
  }
  void TearDown()
  {
  }
};

TEST(TestGame1, GivenANewClass_WhenCallOnlyFuntion_ThenRuturn1)
{
  u32 returnValue = 1;
  EXPECT_EQ(0,returnValue);
}

/*
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
} 
*/    
