#include "Balrog.h"

Balrog::Balrog(): Monster(15, 100, 9001){}
string Balrog::startEvent(Player& player){
    string event = Monster::startEvent(player);;
    setCombatPower(this->getCombatPower() + BALROG_POWER_UP);
    return event;
}
std::string Balrog::getName() const{
    return "Balrog";
}
std::string Balrog::getDescription() const{
    return(getName() + Monster::getDescription());
}