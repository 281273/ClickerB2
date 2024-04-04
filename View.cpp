#include "View.h"

void View::prompt(int i){
    cout<<i;
}

void View::prompt(const string& s){
    cout<<s;
}

char View::getInput(){
    char input;
    //bez getcha bo i tak trzeba potwierdzac enterem. Trzeba zmieniac opcje Clion
    cin>>input;
    return input;
}



