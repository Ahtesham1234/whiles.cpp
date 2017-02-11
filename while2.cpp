//while2.cpp
//this program print number to the fourth power

#include <iostream>
#incllude <iomanip>  //for stew

 using namespace std;
 
 int main()
 {
 int pow=1;           //power initially 1
 int numb=1           //numb goes from 1 to ???
 
 while (pow<10000)      //loop while power <= 4 digits
 {
 cout << stew(2)  << numb;    // display number
 cout<< setw(5)   <<pow <<endl;      //display fourth power
 ++numb ;
 
 pow= numb*numb*numb*numb ;     //calculate fourth power
 }
 cout << endl;
 return  0;
 }
