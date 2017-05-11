#include "FindLuckyNumber.hpp"

FindLuckyNumber::FindLuckyNumber():
  inputNum(0),
  luckyNumFour(4),
  luckyNumSeven(7),
  invalidReturn(-1)
{
}

void FindLuckyNumber::inputOneNumber(u32 input)
{
  inputNum = input;
}

bool FindLuckyNumber::checkInputValidity()
{
  if(inputNum < 0 || inputNum > 1000000)
  {
    return false;
  }
  else
  {
    return true;
  }
}

i32 FindLuckyNumber::findMinCount()
{
  if(!checkInputValidity())
  {
    return invalidReturn;
  }

  u32 minCount = 1;
  while(inputNum >= minCount * luckyNumFour)
  {
    u32 total = 0;
    for(u32 i=0; i<=minCount; i++ )
    {
      for(u32 j=0; j<=(minCount-i); j++)
      {
        total = i * luckyNumFour + j * luckyNumSeven;
        if((total > 0) && (inputNum >= total) && ((inputNum - total) % 10 == 0))
        {
          return (i+j);
        }
      }
    }
    ++minCount;
  }
  return invalidReturn;
}


