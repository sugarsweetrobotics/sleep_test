#include <coil/Time.h>
#include <iostream>

int main(void) {
  coil::TimeValue start = coil::gettimeofday();
  for(int i = 0;i < 30000;i++) {
    coil::usleep(100);
  }
  coil::TimeValue stop = coil::gettimeofday();
  
  double interval = stop - start;
  std::cout << "Interval = " << interval << std::endl;
  

  return 0;
}
