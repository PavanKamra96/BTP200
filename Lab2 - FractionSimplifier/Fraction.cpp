/*
Name: Pavan Kamra
Course: BTP200
*/

#include < iostream > 
#include "Fraction.h"
using namespace std;

// function accepts the numerator and denomenator from the client and stores simplified values in a Fraction object.
void Fraction::set(int n, int d) {
  num = n;
  den = d;
  simplify();
}

// function simplifies the numerator and denominator, if possible. 
void Fraction::simplify() {
  int i;
  for (i = 2; i < 9; i++) {
    while (num % i == 0 && den % i == 0 && num != 0 && den != 0) {
      num = num / i;
      den = den / i;
    }
  }
}

//displays the fraction stored in the Fraction object. 
void Fraction::display() const {
  if (den == 0) {
    cout << "Sorry this is a invalid fraction" << endl;
  } else if (num == 0) {
    cout << "0" << endl;
  } else {
    cout << "= " << num << " / " << den << endl;
  }
}