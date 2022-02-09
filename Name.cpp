#include <iostream>
using namespace std;

int main (int argc, char **argv) {

    string name;
    cout << " Enter your name: " <<endl;
    cin >> name;

   cout << " Hi " << name << " I have a little problem for you type any number and the out put will be times 100" <<endl;

   int number;
   cout << name << " please enter number " <<endl;
   cin >> number;

   cout << " Your answer is " << number * 100 << endl;

    return 0;
}