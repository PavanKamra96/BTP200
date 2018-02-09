/*
Name: Pavan Kamra
Course: BTP200
*/

// struct object for the fraction. 
struct Fraction {
  private: 
  int num;
  int den;
  void simplify();

  public: 
  void display() const;
  voidset(int n, int d);
};