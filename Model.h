#ifndef CLICKERB_MODEL_H
#define CLICKERB_MODEL_H

#include <iostream>
#include <string>
using namespace std;

class Model {
private:
    int points;
    int level;

    string int_to_roman(int a);
public:
    Model(int points,int level);
    void storePoints(int n);
    void storeLevel(int n);
    [[nodiscard]] int retrivePoints() const ;
    [[nodiscard]] int retriveLevel() const;
    string retriveRomanLevel();
    void addPoints();
    void addLevel();


};


#endif //CLICKERB_MODEL_H
