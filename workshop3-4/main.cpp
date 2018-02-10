/**
	Name: Pavan Kumar Kamra
	Course: BTP200
**/

#include <iostream> 
#include "Molecule.h"
#include <cstring>

using namespace std;

int main() {
  int n;
  Molecule * molecule;

  cout << "Molecular Information\n";
  cout << "=====================" << endl;

  cout << "Number of Molecules : ";
  cin >> n;

  // allocate dynamic memory for an array of n Molecules
  molecule = new Molecule[n];
  

  for (int i = 0; i < n; i++) {
    char symbol[21];
    char description[201];
    double weight;

    cout << "Enter Structure: ";
    cin >> symbol;
    cout << "Enter Full Name: ";
    cin.ignore(2000, '\n');
    cin.getline(description, 30);
    cout << "Enter weight: ";
    cin >> weight;
    Molecule temp(weight, symbol, description);
    molecule[i] = temp;
  }
  cout << endl;

  cout << "Structure     Mass Name\n";
  cout << "========================================" << endl;

  for (int i = 0; i < n; i++) {
    molecule[i].display();
    cout << endl;
  }
}