#ifndef CLICKERB_CONTROLLER_H
#define CLICKERB_CONTROLLER_H

#include "View.h"
#include "Model.h"

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

using namespace std;
//#include <conio.h> not in CLion


class Controller {
private:
    View& view;
    Model& model;

    bool koniec;
    char addPointInput;
    char saveExitInput;
    char noSaveExitInput;
    char newGameInput;
    char loadGameInput;
    char instructionInput;
    char exitInput;

    void menuInput();
    void gameInput();
    void createSave();
    bool loadSave();

    void game();
public:
    Controller(View& _view,Model& _model);

    void menu();
};


#endif //CLICKERB_CONTROLLER_H
