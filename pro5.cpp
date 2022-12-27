#include <iostream>
using namespace std;
main()
{
int adultprice;
int childprice;
string movie;
int numberofadultticket;
int numberofchildticket;
float percentage;
int amountoftotalsoldtickets;
int afterdonation;
cout << " enter Movie name:";
cin >> movie;
cout << " enteradult ticket price:";
cin >> adultprice;
cout << " enter child ticket price:";
cin >> childprice;
cout << "enter the number of adult ticket sold:";
cin >> numberofadultticket;
cout << "enter the number of child ticket sold:";
cin >> numberofchildticket;
cout << " enter percentage of amount to be donated to charity:";
cin >> percentage;
amountoftotalsoldtickets = (adultprice*numberofadultticket) + (childprice*numberofchildticket);
cout << "total amount generated:" << amountoftotalsoldtickets << endl;
afterdonation = (amountoftotalsoldtickets)-(percentage);
cout << "total amount after donation:" << afterdonation;
}


