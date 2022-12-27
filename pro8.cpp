#include <iostream>
using namespace std;
main()
{
float vegetableprice;
float fruitprice;
int totalvegetables;
int totalfruits;
int earning;
int vegeamount;
int fruitamount;
int totalearning;
cout << "enter vegetable price per kilogram:";
cin >> vegetableprice;
cout << " enter fruit price per kilogram:";
cin >> fruitprice;
cout << " enter total kilograms of vegetables:";
cin >> totalvegetables;
cout << " enter total kilograms of fruit:";
cin >> totalfruits;
vegeamount = vegetableprice * totalvegetables;
fruitamount = fruitprice * totalfruits;
earning = vegeamount + fruitamount;
totalearning = earning/1.94;
cout << " total earning" << totalearning;
}


