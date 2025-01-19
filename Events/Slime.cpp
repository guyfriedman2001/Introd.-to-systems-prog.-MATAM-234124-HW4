//#pragma once
#include "Slime.h"
//#include "Monster.h"
// #include "../Players/Player.h"
// #include <string>
// #include <vector>
Slime::Slime(): Monster(15,5,25){}
string Slime::startEvent(Player& player){
    return Monster::startEvent(player);
}
std::string Slime::getName()const {
    return "Slime";
}
std::string Slime::getDescription() const{
    return(getName() + Monster::getDescription());
}