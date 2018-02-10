/**
	Name: Pavan Kamra
	Course: BTP200
**/

class Molecule {
  char Symbol[10];
  char Description[30];
  double weight;
  
  public:
  Molecule();
  Molecule(double e, const char[], const char[]);
  void display() const;
};