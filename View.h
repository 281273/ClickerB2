#ifndef CLICKERB_VIEW_H
#define CLICKERB_VIEW_H

#include <iostream>
#include <string>

using namespace std;

class View {
private:

public:
    void prompt(int i);
    void prompt(const string& s);
    char getInput();

};


#endif //CLICKERB_VIEW_H
