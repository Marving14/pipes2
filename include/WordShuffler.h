#ifndef WORDSHUFFLER_H
#define WORDSHUFFLER_H
#include <string>
#include <bits/stdc++.h>


using namespace std;

class WordShuffler
{
    public:
        WordShuffler();
        string GetLastWord(string sentence);
        string ReorderedSentence(string sentence);

        virtual ~WordShuffler();

    protected:

    private:
};

#endif // WORDSHUFFLER_H
