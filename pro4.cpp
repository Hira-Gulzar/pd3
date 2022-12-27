#include <iostream>
using namespace std;
main()
{
int size;
int cost;
int area;
int costoffertilizer;
int areapersquarefeet;
cout << " Enter size of fertilizer in pounds:";
cin >> size;
cout << " Enter cost of the bag:";
cin >> cost;
cout << " Enter area in square feet:";
cin >> area;
costoffertilizer = cost/size;
cout << "cost of fertilizer per pound:" << costoffertilizer << endl;
areapersquarefeet=area*size;
cout << "cost of fertilizing the area per square feet:" <<areapersquarefeet;
}



