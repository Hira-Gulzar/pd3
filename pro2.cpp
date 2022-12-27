#include <iostream>
using namespace std;
main()
{
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float percentage;
cout << "Enter name:";
cin >> name;
cout << " Enter first subject:";
cin >> subject1;
cout << " Enter second subject:";
cin >> subject2;
cout << "Enter third subject:";
cin >> subject3;
cout << "Enter fourth subject:";
cin >> subject4;
cout << "Enter fifth subject:";
cin >> subject5;
percentage = (subject1+subject2+subject3+subject4+subject5)/500.0*100;
cout << " Enter percentage:" << percentage;
}
