#include "View.h"

void prompt(int i){
    cout<<i;
}

void prompt(string s){
    cout<<s;
}

string getInput(){
    string x;
    //bez getcha bo i tak trzeba potwierdzac enterem. Trzeba zmieniac opcje Clion
    cin>>x;
    return x;
}