/*
Name: Pavan Kamra
Course: BTP200
*/

#
include < iostream >
  using namespace std;#
include "Fraction.h"

int main() {

  Fraction fraction;
  int num, den;

  cout << "Fraction Simplifier" << endl;
  cout << "==================" << endl;
  cout << "Numerator    : ";
  cin >> num;
  cout << "Denominator : ";
  cin >> den;
  cout << endl;

  fraction.set(num, den);
  fraction.display();
  cout << endl;
}