#include "Controller.h"

int main() {
    View view;
    Model model;
    Controller controller(&view , &model);
    controller.launch();
    return 0;
}

