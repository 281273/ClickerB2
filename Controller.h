#ifndef CLICKERB_CONTROLLER_H
#define CLICKERB_CONTROLLER_H

#include "View.h"
#include "Model.h"
#include "KeyBinding.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;



class Controller {
private:
    View& view;
    Model& model;
    KeyBinding& keybinding;

    bool koniec;

    void gameInput();

    void game();
public:
    Controller(View& _view,Model& _model,KeyBinding& _keybinding);
    void menu();
};


#endif //CLICKERB_CONTROLLER_H
