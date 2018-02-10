/**
	Name: Pavan Kamra
	Class: BTP200
**/

#include <iostream> 
#include <cstring> 
#include <iomanip>
#include "Molecule.h"
using namespace std;

Molecule::Molecule() {
  Symbol[0] = '\0';
  Description[0] = '\0';
  weight = 0.0;
}

Molecule::Molecule(double e,
  const char s[10],
    const char d[30]) {
  if (s[0] != '\0' && d[0] != '\0' && e >= 0.0) {
    weight = e;
    strcpy(Symbol, s);
    strcpy(Description, d);
  } else { * this = Molecule();
  }
}

void Molecule::display() const {
  if (Description[0] != '\0' && Symbol[0] != '\0' && weight >= 0) {
    cout << fixed << left << setw(10) << Symbol << " " <<
      right << setw(7) << setprecision(3) << weight << " " << Description;
  } else {
    cout << "No Data Available" << endl;
  }
}