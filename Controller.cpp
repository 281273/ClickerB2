#include "Controller.h"


Controller::Controller(View& _view,Model& _model,KeyBinding& _keybinding):view(_view),model(_model),keybinding(_keybinding){

    koniec=false;
}


void Controller::menu(){
    while(true){
        view.prompt("\nMENU\nPress [1-3]\n1.New Game\n2.Load Game\n3.Exit\n");
        char playerInput=view.getInput();

        if(playerInput==keybinding.newGameInput){
            model.storePoints(0);
            model.storeLevel(1);
            game();
        }
        else if(playerInput==keybinding.loadGameInput){
            if(model.loadSave()){
                view.prompt("Game loaded successfully:\n");
                game();
            }else{
                view.prompt("Unable to load save!\n");
            }
        }
        else if(playerInput==keybinding.exitInput){
            exit(0);
        }
        else{
            view.prompt("Unexpected input\n");
        }
    }
}

void Controller::gameInput(){
    char playerInput=view.getInput();
    int oldLevel=model.retriveLevel();

    if(playerInput==keybinding.addPointInput){
        model.addPoints();
        view.prompt("+1pkt \t");
        int level=model.retriveLevel();
        if(oldLevel<level){
            view.prompt("+1lvl!!!");
        }
    }
    //Save and exit
    else if(playerInput==keybinding.saveExitInput){
        model.createSave();
        koniec=true;
        view.prompt("\n Koniec gry. Twoj wynik ostateczny to: \n");
    }
    //No save exit
    else if(playerInput==keybinding.noSaveExitInput){
        koniec=true;
        view.prompt("\n Koniec gry. Twoj wynik ostateczny to: \n");
    }
    //Przypomnienie
    else if(playerInput==keybinding.instructionInput){
        view.prompt("Instructions: \n (b-> +1pkt , e-> Save & Exit , r-> Exit W/o Saving, Every 5 pkt equals +1lv) \n");
    }
    else{
        view.prompt("Unexpected input");
    }
}


void Controller::game(){
    koniec=false;
    view.prompt("Instructions: \n (b-> +1pkt , e-> Save & Exit , r-> Exit W/o Saving, Every 5 pkt equals +1lv) \n");

    while(!koniec){
        //Wypisanie
        int points=model.retrivePoints();
        string Rlevel=model.retriveRomanLevel();
        view.prompt("\nCurrent score:");
        view.prompt("\n Points: ");
        view.prompt(points);
        view.prompt("\t Level: ");
        view.prompt(Rlevel);
        view.prompt("\n");

        //Znak
        gameInput();


    }
}

