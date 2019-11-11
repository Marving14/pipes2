#include <iostream>
#include <string>
#include "include/SortList.h"
using namespace std;

int main()
{
    string sA, sB;
    stringstream ss;
    cout << "Write the first sentence " << endl;
    getline(cin, sA);
    cout << "Write the second sentence " << endl;
    getline(cin, sB);

    ss << sA << endl;
    ss << sB << endl;

    SortList sorter(ss);
    cout << sorter.filter();

    return 0;
}
