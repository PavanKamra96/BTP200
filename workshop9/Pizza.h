#include "iFood.h"
const int N = 40;

class Pizza: public iFood {
  private: 
	int slices;
	double diameter;
	int portions;
	int consumed;

  public: 
	Pizza();
	Pizza(double, int);
	int portion() const;
	void consume();
	int remaining() const;
	void display() const;
};

class DeluxePizza: public Pizza {
  private: 
	double Diam;
	int portions;
	int slices;
	int consumed;
	char toppings[N + 1];

  public: 
	DeluxePizza();
	DeluxePizza(double, int,
    const char * );
	int portion() const;
	void consume();
	int remaining() const;
	void display() const;
};