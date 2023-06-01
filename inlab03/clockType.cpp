#include <iostream>

using namespace std;

class ClockType
{
public:
    void setTime(int, int, int);
    bool equalTime(const ClockType&) const;
    ClockType(int, int, int);
    ClockType();

private:
    int hr;
    int min;
    int sec;
};

bool ClockType::equalTime(const ClockType& otherClock) const{
  int total = this->hr * 3600 + this->min * 60 + this->sec;
  int total2 = otherClock.hr * 3600 + otherClock.min * 60 + otherClock.sec;

  if (total == total2) {
    return true;
  }

  return false;
}
