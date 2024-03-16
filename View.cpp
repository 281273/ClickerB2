#include "View.h"

void View::prompt(int i){
    cout<<i;
}

void View::prompt(const string& s){
    cout<<s;
}

string View::getInput(){
    string x;
    //bez getcha bo i tak trzeba potwierdzac enterem. Trzeba zmieniac opcje Clion
    cin>>x;
    return x;
}

string View::int_to_roman(int a)
{
    //Do 3999 , bo nie mam znaku ponad M
    string ans;
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    ans = M[a/1000]+C[(a%1000)/100]+X[(a%100)/10]+I[(a%10)];
    return ans;
}

void View::promptRoman(int i){
    cout<<int_to_roman(i);
}