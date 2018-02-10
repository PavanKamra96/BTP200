#include "Phone.h"
#include <iostream>

Phone::Phone(){
   area_code = 0;
   local_number = 0;
}

Phone::Phone(int a, int l) {
  if (a >= 100 && a <= 999 &&
    l >= 1000000 && l <= 9999999) {
    area_code = a;
    local_number = l;
  } else { * this = Phone();
  }
}

void Phone::display() const {
  int n1, n2, n3, n4, n5, n6, n7;
  n1 = (local_number / 1000000) % 10;
  n2 = (local_number / 100000) % 10;
  n3 = (local_number / 10000) % 10;
  n4 = (local_number / 1000) % 10;
  n5 = (local_number / 100) % 10;
  n6 = (local_number / 10) % 10;
  n7 = local_number % 10;
  if (isValid())
    std::cout << area_code << "-" << n1 << n2 << n3 << "-" << n4 << n5 << n6 << n7;
}

bool Phone::isValid() const {
  if (area_code >= 100 && area_code <= 999 &&
    local_number >= 1000000 && local_number <= 9999999) {
    return true;
  } else {
    return false;
  }
}