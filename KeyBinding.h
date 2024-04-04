#ifndef CLICKERB_KEYBINDING_H
#define CLICKERB_KEYBINDING_H

#include <iostream>
using namespace std;


class KeyBinding {
private:

public:
    KeyBinding(char newGameInput,char loadGameInput,char exitInput,char addPointInput,char saveExitInput,char noSaveExitInput,char instructionInput);

    char newGameInput;
    char loadGameInput;
    char exitInput;

    char addPointInput;
    char saveExitInput;
    char noSaveExitInput;
    char instructionInput;

};



#endif //CLICKERB_KEYBINDING_H
