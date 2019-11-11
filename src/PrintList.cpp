#include "PrintList.h"
#include <iostream>
#include <vector>
using namespace std;

PrintList::PrintList(stringstream &ss)
{
    inputM << ss.str();
}
void printstream(){
    string aux;


    while (getline(inputM, aux)){
        if( !(aux=="")){
            cout<<aux<<endl;
        }
    }
}
