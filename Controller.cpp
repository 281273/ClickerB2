#include "Controller.h"


Controller::Controller(View& _view,Model& _model):view(_view),model(_model){

    koniec=false;

    addPointInput='b';
    saveExitInput='e';
    noSaveExitInput='r';

    newGameInput='1';
    loadGameInput='2';
    exitInput='3';
    instructionInput='i';
}

void Controller::createSave() {

    int points = model.retrivePoints();
    int level = model.retriveLevel();
    ofstream myfile ("save.txt");
    if (myfile.is_open())
    {
        myfile << points <<" "<<level<<"\n";

        myfile.close();
    }
    else cout << "Unable to open file";
}

void Controller::loadSave() {
    int scorePoints;
    int scoreLevel;

        ifstream file("save.txt");
        string line;

        getline(file, line);
        istringstream issline(line);
        issline >> scorePoints;
        issline >> scoreLevel;
        model.storePoints(scorePoints);
        model.storeLevel(scoreLevel);

    int points=model.retrivePoints();
    string Rlevel=model.retriveRomanLevel();
    view.prompt("Game loaded successfully:\n Your present points:");
    view.prompt("\n Points: ");
    view.prompt(points);
    view.prompt("\t Level: ");
    view.prompt(Rlevel);
    view.prompt("\n\n");
    //view.prompt(points);
    //view.prompt("\n");
    //view.prompt(level);
}


void Controller::menuInput(){
    char playerInput=view.getInput();

        if(playerInput==newGameInput){
            game();
        }
        else if(playerInput==loadGameInput){
            loadSave();
            game();
        }
        else if(playerInput==exitInput){
            exit(0);
        }
        else{
            view.prompt("Unexpected input");
        }


}

void Controller::gameInput(){
    char playerInput=view.getInput();
    int oldLevel=model.retriveLevel();

    if(playerInput==addPointInput){
        model.addPoints();
        view.prompt("+1pkt \t");
        int level=model.retriveLevel();
        if(oldLevel<level){
            view.prompt("+1lvl!!!");
        }
    }
    //Save and exit
    else if(playerInput==saveExitInput){
        createSave();
        koniec=true;
        view.prompt("\n Koniec gry. Twoj wynik ostateczny to: \n");
    }
    //No save exit
    else if(playerInput==noSaveExitInput){
        koniec=true;
        view.prompt("\n Koniec gry. Twoj wynik ostateczny to: \n");
    }
    //Przypomnienie
    else if(playerInput==instructionInput){
        view.prompt("Instructions: \n (b-> +1pkt , e-> Save & Exit , r-> Exit W/o Saving, Every 5 pkt equals +1lv) \n");
    }
    else{
        view.prompt("Unexpected input");
    }
}

void Controller::menu(){
    view.prompt("Press [1-2]\n1.New Game\n2.Load Game\n3.Exit\n");
    menuInput();
}

void Controller::game(){

    view.prompt("Instructions: \n (b-> +1pkt , e-> wyjscie ,Kazde 5 pkt to +1lv) \n\n ");

    while(!koniec){
        //Funkcjonalnosc

        gameInput();

        //Wypisanie
        int points=model.retrivePoints();
        string Rlevel=model.retriveRomanLevel();

        view.prompt("\n Points: ");
        view.prompt(points);
        view.prompt("\t Level: ");
        view.prompt(Rlevel);
        view.prompt("\n");

    }
}

