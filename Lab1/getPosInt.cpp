/*
	Name: Pavan Kumar Kamra
	Course: BTP200
	Description: Workshop1, getPosInt.cpp, has the functions for w1.cpp.
*/

 #include "getPosInt.h"
 #include < iostream >
 using namespace std;
 
 // getPosInt returns a positive integer not greater than max
 int getPosInt(int max) {
   int i;
   int keepasking;

   keepasking = 1;
   do {
     cout << "Enter a positive integer not greater than " << max << " : ";
     cin >> i;
     if (i < 0 || i > max)
       cout << "Your entry is out of range.  Try again." << endl;
     else
       keepasking = 0;
   } while (keepasking == 1);

   return i;
 }

