 /*
  Name: Pavan Kumar Kamra
  Course: BTP200
  Description: Modular Programs - Workshop1, w1.cpp
 */

 #include < iostream >
 #include "w1.h" // This includes the define for MAX. 
 #include "getPosInt.h" // function prototype for getPosInt
 using namespace std;
 
 int main() {
   int i;
   i = getPosInt(MAX);
   cout << "You entered " << i << endl;
 }
