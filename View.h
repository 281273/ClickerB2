#ifndef CLICKERB_VIEW_H
#define CLICKERB_VIEW_H

#include <iostream>
#include <string>
using namespace std;

class View {
private:
    static string int_to_roman(int a);
public:
    static void prompt(int i);
    static void prompt(const string& s);
    static void promptRoman(int i);
    static string getInput();

};


#endif //CLICKERB_VIEW_H
