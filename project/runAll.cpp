#include <gtest/gtest.h>
#include "Glo_def.h"
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

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}     
