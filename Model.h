#ifndef CLICKERB_MODEL_H
#define CLICKERB_MODEL_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
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
    void createSave() const;
    bool loadSave();
};


#endif //CLICKERB_MODEL_H
