/** 
	Name: Pavan Kamra 
    Course: BTP200
**/

#include < iostream >

  class Item {
    private:
		int itemNum;
		double itemPrice;
		char * description;

    public:
		Item();
		Item(int num, double price);
		void operator = (double p);
		bool empty() const;
		void display(std::ostream & os) const;
  };
std::istream & operator >> (std::istream & is, Item & i);
std::ostream & operator << (std::ostream & os,const Item & i);