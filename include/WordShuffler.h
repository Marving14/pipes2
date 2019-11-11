#ifndef WORDSHUFFLER_H
#define WORDSHUFFLER_H
#include <string>
#include <bits/stdc++.h>
#include <iostream>


using namespace std;

class WordShuffler
{
    public:
        WordShuffler(stringstream &ss);
       // string GetLastWord();
        string ReorderedSentence();



    protected:

    private:
        stringstream input;
        stringstream output;
};

#endif // WORDSHUFFLER_H
