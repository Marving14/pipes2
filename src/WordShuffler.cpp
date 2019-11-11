#include "WordShuffler.h"

WordShuffler::WordShuffler(stringstream &ss)
{
    input << ss.str();
}

string str_last_word(string &str){

    size_t index = str.find_last_of(" ");
    if(index != string::npos){
        return str.substr(index+1, str.length());
    }
    else
        return "";
}
/*
string WordShuffler::GetLastWord( ){
   // printf(str_last_word(sentence));
    return str_last_word( input.str() );
}
*/
string WordShuffler::ReorderedSentence( ){

    string line;
    getline(input, line);

    string last= str_last_word( line );

    int a = line.find(last);
    line = line.substr(0, a);

    output << last +" "+ line;

    return output.str();
}


