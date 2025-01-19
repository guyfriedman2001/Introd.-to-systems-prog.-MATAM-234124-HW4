//#pragma once
#include "Snail.h"
//#include "Monster.h"
// #include "../Players/Player.h"
// #include <string>
// #include <vector>
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