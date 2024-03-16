#include "Controller.h"

View* view;
Model* model;
bool koniec=true;

Controller::Controller(View* _view,Model* _model){
    view = _view;
    model = _model;

launch();
}

void checkStats(){
    string x=model->retriveString();
    int oldlevel=model->retriveLevel();
    if(x=="b"){
        model->addPoints();
        view->prompt("+1pkt \r");
        int level=model->retriveLevel();
        if(oldlevel<level){
            view->prompt("+1lvl!!! \t");
        }
    }else if(x=="e"){
        koniec=false;
        view->prompt("\n Koniec gry. Twoj wynik ostateczny to: \n");
    }
}

void launch(){

    view->prompt("Instrukcje: \n (b-> +1pkt , e-> wyjscie ,Kazde 5 pkt to +1lv) \n\n ");

    while(koniec){
        //Funkcjonalnosc
        //clrscr(); not working in Clion
        view->prompt("Podaj znak: ");
        string s = view->getInput();
        model->storeString(s);

        string x=model->retriveString();

        checkStats();

        //Wypisanie
        int points=model->retrivePoints();
        int level=model->retriveLevel();

        view->prompt("Points: ");
        view->prompt(points);
        view->prompt("\t Level: ");
        view->prompt(level);
        //view->prompt("\t Here is your input: ");
        //view->prompt(x);
        view->prompt("\n");

    }
}