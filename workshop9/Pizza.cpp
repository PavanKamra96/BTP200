#include "Pizza.h"
#include <iostream> 
#include <cstring>

Pizza::Pizza() {
    diameter = 0.0;
    portions = 0;
    consumed = 0;
    slices = 0;
}

Pizza::Pizza(double dia, int slices) {
  if (dia > 0 && slices > 0) {
    diameter = dia;
    slices = slices;
    portions = slices;
  } else { * this = Pizza();
  }
}

int Pizza::portion() const {
  return portions;
}

void Pizza::consume() {
  consumed++;
  if (consumed < portions)
    slices = portions - consumed;
}

int Pizza::remaining() const {
  return slices;
}

void Pizza::display() const {
  std::cout << (int)(diameter) << "'' " << portions << " slices " << slices << " remaining " <<
    std::endl;
}

DeluxePizza::DeluxePizza() {
  Diam = 0.0;
  portions = 0;
  slices = 0;
  consumed = 0;
  toppings[0] = '\0';
}

DeluxePizza::DeluxePizza(double d, int s, const char * t) {
  if (d > 0 && s > 0) {
    Diam = d;
    slices = s;
    portions = s;
    std::strcpy(toppings, t);
  } else { * this = DeluxePizza();
  }
}

int DeluxePizza::portion() const {
  return portions;
}

void DeluxePizza::consume() {
  consumed++;
  if (consumed < portions)
    slices = portions - consumed;
}

int DeluxePizza::remaining() const {
  return slices;
}

void DeluxePizza::display() const {
  std::cout << (int)(Diam) << "'' " << portions << " slices " << slices << " remaining " << "\n" << "-" << toppings << std::endl;
}