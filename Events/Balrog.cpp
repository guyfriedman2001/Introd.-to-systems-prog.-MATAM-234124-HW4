#include "Balrog.h"

Balrog::Balrog(): Monster(BALROG_COMBAT_POWER, BALROG_LOOT, BALROG_DAMAGE){}
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