#include "Controller.h"

Controller::Controller(View* _view,Model* _model){
    view = _view;
    model = _model;
    koniec=true;

}



void Controller::checkStats(){
    string x=model->retriveString();
    int oldlevel=model->retriveLevel();
    if(x=="b"){
        model->addPoints();
        View::prompt("+1pkt \t");
        int level=model->retriveLevel();
        if(oldlevel<level){
            View::prompt("+1lvl!!!");
        }
    }else if(x=="e"){
        koniec=false;
        View::prompt("\n Koniec gry. Twoj wynik ostateczny to: \n");
    }
}



void Controller::launch(){

    View::prompt("Instrukcje: \n (b-> +1pkt , e-> wyjscie ,Kazde 5 pkt to +1lv) \n\n ");

    while(koniec){
        //Funkcjonalnosc
        //clrscr(); not working in Clion
        View::prompt("Podaj znak: ");
        string s = View::getInput();
        model->storeString(s);

        string x=model->retriveString();

        checkStats();

        //Wypisanie
        int points=model->retrivePoints();
        int level=model->retriveLevel();

        View::prompt("\n Points: ");
        View::prompt(points);
        View::prompt("\t Level: ");
        View::promptRoman(level);
        //view->prompt("\t Here is your input: ");
        //view->prompt(x);
        View::prompt("\n");

    }
}

