#pragma once
#include "Snail.h"

Snail::Snail(): Monster(5,2,10){}
void Snail::startEvent(Player* player){
    Monster::startEvent(player);
}
std::string Snail::getName(){
    return "Snail";
}

std::string Snail::getDescription(){
    return(getName() + Monster::getDescription());
}