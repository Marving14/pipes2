#include <iostream>
#include "WordShuffler.h"

using namespace std;

int main()
{
    string sA, sB;

    WordShuffler a;

    cout << "Write the first sentence " << endl;
    getline(cin, sA);
    cout << "Write the second sentence " << endl;
    getline(cin, sB);

    //cout<<a.GetLastWord(sA);

    //a.ReorderedSentence("Write the second sentence");

    string aa = a.ReorderedSentence(sA);
    string bb = a.ReorderedSentence(sB);

    cout<<aa<<endl<<bb;
    return 0;
}
