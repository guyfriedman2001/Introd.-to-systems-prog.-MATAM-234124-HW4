#include "Snail.h"

Snail::Snail(): Monster(SNAIL_COMBAT_POWER,SNAIL_LOOT,SNAIL_DAMAGE){}

string Snail::startEvent(Player& player){
    return Monster::startEvent(player);
}

std::string Snail::getName() const{
    return "Snail";
}

std::string Snail::getDescription()const{
    return(getName() + Monster::getDescription());
}