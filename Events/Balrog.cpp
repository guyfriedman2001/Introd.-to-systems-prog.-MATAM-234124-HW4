//#pragma once
#include "Balrog.h"
//#include "Monster.h"

Balrog::Balrog(): Monster(15, 100, 9001){}
string Balrog::startEvent(Player& player){
    Monster::setCombatPower(2);
    return Monster::startEvent(player);
}
std::string Balrog::getName() const{
    return "Balrog";
}
std::string Balrog::getDescription() const{
    return(getName() + Monster::getDescription());
}