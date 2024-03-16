#include "Controller.h"


int main() {
    View view;
    Model model;
    Controller controller(&view , &model);
    return 0;
}

