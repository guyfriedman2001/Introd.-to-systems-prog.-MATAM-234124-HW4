#pragma once
#include "Slime.h"

Slime::Slime(): Monster(15,5,25){}
string Slime::startEvent(Player& player){
    Monster::startEvent(player);
}
std::string Slime::getName()const {
    return "Slime";
}
std::string Slime::getDescription() const{
    return(getName() + Monster::getDescription());
}