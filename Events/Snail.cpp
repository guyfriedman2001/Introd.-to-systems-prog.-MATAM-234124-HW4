#include "Snail.h"

Snail::Snail(): Monster(5,2,10){}

string Snail::startEvent(Player& player){
    return Monster::startEvent(player);
}

std::string Snail::getName() const{
    return "Snail";
}

std::string Snail::getDescription()const{
    return(getName() + Monster::getDescription());
}