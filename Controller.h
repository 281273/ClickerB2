#ifndef CLICKERB_CONTROLLER_H
#define CLICKERB_CONTROLLER_H

#include "View.h"
#include "Model.h"

#include <iostream>
#include <string>
//#include <conio.h> not in CLion
using namespace std;

class Controller {
private:
    View* view;
    Model* model;
    bool koniec;

public:
    Controller(View* _view,Model* _model);
    void checkStats();
    void launch();
};


#endif //CLICKERB_CONTROLLER_H
