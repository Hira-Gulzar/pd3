#include <iostream>
using namespace std;
main()
{
int mod1;
int mod2;
int mod3;
int mod4;
int number;
int result;
cout << " enter number: ";
cin >> number;
mod1 = number % 10;
number = number/10;
mod2 = number % 10;
number = number /10;
mod3 = number % 10;
number = number /10;
mod4 = number % 10;
number = number /10;
result = mod1 + mod2 + mod3 + mod4;
cout << "result is:" << result;

}