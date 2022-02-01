#include <iostream>
using namespace std;


int main(int argc, char **argv) {
 int a = 5;

 cout << a << endl;

 double puff = 2.5;

 cout << puff << endl; 

 cout << puff + a << endl; 

// This is an IF STATEMENT

 if (a < puff) {
    cout << a << endl;   
 }  
 else {
   cout << puff << endl;
 }

 double pi = 3.14;

 cout << "This is a piece of pi " << pi << endl;

 cout << "This is (a) times (pi) " << pi * a << endl;

 double multiplied = pi * a;

 cout << "This is the variable of (pi) time (a) " << multiplied << endl;

 // for loop
 // declare 3 things 
 for(int i = 0; i < 10; i++){

   cout << i << endl;

 }

 
}



// double puff = 2.33 
// int a = 1,2,3,4 whole numbers
// float water = 2.545354 more decimal points. 
// to print out you could use ( using namespace std; ) or before cout put ( std:: )