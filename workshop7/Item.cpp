/* Name: Pavan Kamra
   Date: 3/21/2015
   Workshop: 7
*/

#include <iostream> 
#include <iomanip> 
#include <cstring>
#include "Item.h"

//constructor
Item::Item() {
    itemNum = 0;
    itemPrice = 0.0;
}

//overloaded constructor
Item::Item(int num, double price) {
  if (num >= 0 && price >= 0) {
    itemNum = num;
    itemPrice = price;
  } else
    *this = Item();
}

void Item::operator = (double p) {
  if (p >= 0)
    itemPrice = p;
  else
    *this = Item();
}

// checks if class is empty or not
bool Item::empty() const {
  if (itemNum == 0 && itemPrice == 0.0)
    return true;
  else
    return false;
}

//displays the output.
void Item::display(std::ostream & os) const {
  os << std::left << std::setw(8) << itemNum << std::right << std::setw(10) << std::setprecision(4) << itemPrice;
}

std::istream & operator >> (std::istream & is, Item & i) {
  int item;
  double p;

  //item Number
  std::cout << "Item Number : ";
  is >> item;

  // item Price
  std::cout << "Price : ";
  is >> p;

  Item temp(item, p);
  if (!temp.empty())
    i = temp;
  return is;
}

std::ostream & operator << (std::ostream & os,
  const Item & i) {
  i.display(os);
  return os;
}