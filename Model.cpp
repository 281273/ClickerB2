#include "Model.h"

#include <utility>

Model::Model(){
    x=" ";
    points=0;
    level=1;
}



void Model::storeString(string n){
    x=std::move(n);
}

void Model::storePoints(int n){
    points=n;
}

void Model::storeLevel(int n){
    level=n;
}

string Model::retriveString(){
    return x;
}

int Model::retrivePoints() const{
    return points;
}

int Model::retriveLevel() const{
    return level;
}

void Model::addLevel(){
    level=(points/5)+1;
    storePoints(points);
    storeLevel(level);

}

void Model::addPoints(){
    points+=1;
    storePoints(points);
    if(points%5==0){
        addLevel();
    }

}



