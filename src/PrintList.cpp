#include "PrintList.h"
#include <iostream>
#include <vector>

PrintList::PrintList(stringstream &ss)
{
    input << ss.str();
}
void printstream(){
    string aux;

    while(getline(input, aux)){
        if( !(aux=="")){
            cout<<aux<<endl;
        }
    }

}
