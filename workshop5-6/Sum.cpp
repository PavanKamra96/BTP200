/**
	Name: Pavan Kumar Kamra
	Course: BTP200
**/

#include <iostream> 
#include <cstring> 
#include "Sum.h"
using namespace std;

// constructor with defaults
Sum::Sum() {
  array = nullptr;
  size = 0;
  counter = 0;
  sum = 0;
}

// recieves the size of the array
Sum::Sum(int s) {
  if (s > 0)
    size = s;
  else
    size = 0;
  array = new int[size];
  counter = 0;
  sum = 0;
}

// recieves an array of numbers + size
Sum::Sum(const int * tArray, int o) {
  if (o > 0) {
    array = new int[o];
    size = o;
    sum = 0;
    counter = 0;
    for (int i = 0; i < size; i++) {
      array[i] = tArray[i];
    }
    for (int k = 0; k < size; k++) {
      sum = array[k] + sum;
    }
  } else
    size = 0;
}

// displays the results
void Sum::display() const {
  int j = 0;
  while (j < size - 1) {
    cout << array[j] << "+";
    j++;
  }
  cout << array[size - 1] << "=" << sum << endl;
}

// mem operator that adds a num to current obj and returns ref to the current obj
Sum & Sum::operator += (int n) {
  if (counter < size) {
    array[counter] = n;
    sum = sum + n;
    counter = counter + 1;
  } else {
    cerr << "No room for anymore numbers " << n << " has not been added" << endl;
  }
  return *this;
}