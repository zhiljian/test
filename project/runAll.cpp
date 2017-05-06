#include <gtest/gtest.h>

class TestGame : public ::testing::Test{
public:
  void SetUp(){
  }
  void TearDown()
  {
  }
};

TEST(TestGame, testForbuild)
{

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}     
