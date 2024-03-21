#include "Model.h"


Model::Model(int points_,int level_){
    points=points_;
    level=level_;
}

string Model::int_to_roman(int a)
{
    //Do 3999 , bo nie mam znaku ponad M
    string ans;
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    ans = M[a/1000]+C[(a%1000)/100]+X[(a%100)/10]+I[(a%10)];
    return ans;
}

void Model::storePoints(int n){
    points=n;
}

void Model::storeLevel(int n){
    level=n;
}


int Model::retrivePoints() const{
    return points;
}

int Model::retriveLevel() const{
    return level;
}

string Model::retriveRomanLevel(){
    string Rlevel = int_to_roman(level);

    return Rlevel;
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



