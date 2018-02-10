/**
	Name: Pavan Kumar Kamra
	Course: BTP200
**/
#ifndef PHONE_H
#define PHONE_H

#include <iostream>

class Phone {
    public:
        Phone();
		Phone(int areaCode, int localNumber);
		void display() const;
		bool isValid() const;

    private:
      int area_code;
      int local_number;
};

std::istream & operator >> (std::istream & , Phone & p);
std::ostream & operator << (std::ostream & , const Phone & p);

class IntlPhone: public Phone {
  public: 
	IntlPhone();
	IntlPhone(int regionCode, int areaCode, int localNumber);
	void display() const;
	bool isValid() const;

  private: 
	int country_Code;
};

std::istream & operator >> (std::istream & , IntlPhone & p);
std::ostream & operator << (std::ostream & , const IntlPhone & p);

#endif // PHONE_H