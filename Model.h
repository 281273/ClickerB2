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
    Model();
    void storeString(string n);
    void storePoints(int n);
    void storeLevel(int n);
    string retriveString();
    [[nodiscard]] int retrivePoints() const;
    [[nodiscard]] int retriveLevel() const;
    void addPoints();
    void addLevel();


};


#endif //CLICKERB_MODEL_H
