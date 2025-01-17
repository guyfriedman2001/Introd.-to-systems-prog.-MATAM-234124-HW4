#pragma once
#include "Slime.h"

Slime::Slime(): Monster(15,5,25){}
void Slime::startEvent(Player* player){
    Monster::startEvent(player);
}
std::string Slime::getName(){
    return "Slime";
}
std::string Slime::getDescription(){
    return(getName() + Monster::getDescription());
}