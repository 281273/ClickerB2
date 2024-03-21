#include "Controller.h"

int main() {
    View view;
    Model model(0,1);
    Controller controller(view , model);
    controller.menu();
    return 0;
}

