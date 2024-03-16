#ifndef CLICKERB_MODEL_H
#define CLICKERB_MODEL_H

#include <iostream>
#include <string>
using namespace std;

class Model {
private:
    string x;
    int points;
    int level;
public:
    void storeString(string n);
    void storePoints(int n);
    void storeLevel(int n);
    string retriveString();
    int retrivePoints();
    int retriveLevel();
    void addPoints();
    void addLevel();


};


#endif //CLICKERB_MODEL_H
