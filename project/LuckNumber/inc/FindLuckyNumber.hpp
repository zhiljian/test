#include "Glo_def.h"

class FindLuckyNumber
{
public:
  FindLuckyNumber();
  virtual ~FindLuckyNumber()
  {
  };
  void inputOneNumber(u32 input);
  i32 findMinCount();
private:
  bool checkInputValidity();
private:
  u32 inputNum;
  const u32 luckyNumFour;
  const u32 luckyNumSeven;
  const int invalidReturn;
};
