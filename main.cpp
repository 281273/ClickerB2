#include "Controller.h"

int main() {
    View view;
    //Menu> New game,Load Game,Exit | Game> Add points,Save&Exit,Exit,Instructions
    KeyBinding keybinding('1','2','3','b','e','r','i');
    // Starting points , Starting lvl
    Model model(0,1);
    Controller controller(view , model, keybinding);
    controller.menu();
    return 0;
}

