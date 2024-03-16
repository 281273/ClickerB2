#include "Model.h"

string x=" ";
int points=0;
int level=0;


void storeString(string n){
    x=n;
}

void storePoints(int n){
    points=n;
}

void storeLevel(int n){
    level=n;
}

string retriveString(){
    return x;
}

int retrivePoints(){
    return points;
}

int retriveLevel(){
    return level;
}

void addLevel(){
    level=points/5;
    storePoints(points);
    storeLevel(level);

}

void addPoints(){
    points+=1;
    storePoints(points);
    if(points%5==0){
        addLevel();
    }

}



