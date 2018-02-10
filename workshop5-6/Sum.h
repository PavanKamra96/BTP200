/**
	Name: Pavan Kumar Kamra
	Course: BTP200
**/ 

class Sum {
  int *array;
  int size;
  int counter;
  int sum;

  public:
	  Sum();
	  Sum(int);
	  Sum(const int * , int);
	  void display() const;
	  Sum & operator += (int);
};