#include "Slime.h"

Slime::Slime(): Monster(12,5,25){}
string Slime::startEvent(Player& player){
    return Monster::startEvent(player);
}
std::string Slime::getName()const {
    return "Slime";
}
std::string Slime::getDescription() const{
    return(getName() + Monster::getDescription());
}