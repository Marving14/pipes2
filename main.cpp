#include <iostream>
#include <string>
#include <fstream>
#include "include/SortList.h"
#include "include/WordShuffler.h"
#include "include/PrintList.h"
using namespace std;

int main()
{
	string filename;
	cout << "Introduce el nombre del archivo\n"; 
	cin >> filename;
	ifstream file(filename, ifstream::in);

	stringstream ss;

	string line;
	while (getline(file, line)){
		ss << line << endl;
	}

	//cycle words
	WordShuffler shuffler(ss);
	ss.str("");
	ss << shuffler.ReorderedSentence();

	//cout << ss.str();

	//sort list
	SortList sorter(ss);
	ss.str("");
	ss << sorter.filter();

	cout << ss.str();

    return 0;
}
