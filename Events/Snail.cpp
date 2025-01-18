#pragma once
#include "Snail.h"

Snail::Snail(): Monster(5,2,10){}
string Snail::startEvent(Player& player){
    Monster::startEvent(player);
}
std::string Snail::getName() const{
    return "Snail";
}

std::string Snail::getDescription()const{
    return(getName() + Monster::getDescription());
}