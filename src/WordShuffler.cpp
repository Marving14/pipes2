#include "../include/WordShuffler.h"

WordShuffler::WordShuffler()
{
    //ctor
}

string str_last_word(string &str){

    size_t index = str.find_last_of(" ");
    if(index != string::npos){
        return str.substr(index+1, str.length());
    }
    else
        return "";
}

string WordShuffler::GetLastWord(string sentence){
   // printf(str_last_word(sentence));
    return str_last_word(sentence);
}

string WordShuffler::ReorderedSentence(string sentence){
    string last= GetLastWord(sentence);

    int a = sentence.find(last);
    sentence = sentence.substr(0, a);

    string tail = last +" "+ sentence;

    return tail;
}


WordShuffler::~WordShuffler()
{
    //dtor
}
