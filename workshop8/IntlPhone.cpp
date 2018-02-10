#include <iostream> 
#include "Phone.h"

IntlPhone::IntlPhone(){
  country_Code = 0;
}

IntlPhone::IntlPhone(int regionCode, int areaCode, int localNumber): Phone(areaCode, localNumber) {
  //ctor
  if (regionCode >= 1 && regionCode <= 999) {
    country_Code = regionCode;
  } else
    *this = IntlPhone();
}

void IntlPhone::display() const {
  std::cout << country_Code << '-';
  Phone::display();
}

bool IntlPhone::isValid() const {
  return country_Code != 0;
}

std::istream & operator >> (std::istream & is, IntlPhone & p) {
  int tempRegionCode;
  int tempAreaCode;
  int tempLocaleNumber;

  std::cout << "Country : ";
  is >> tempRegionCode;
  if (tempRegionCode >= 1 && tempRegionCode <= 999) {
    std::cout << "Area Code : ";
    is >> tempAreaCode;
    std::cout << "Local No. : ";
    is >> tempLocaleNumber;
  }

  IntlPhone temp(tempRegionCode, tempAreaCode, tempLocaleNumber);
  p = temp;

  return is;
}

std::ostream & operator << (std::ostream & os,
  const IntlPhone & p) {
  p.display();
  return os;
}