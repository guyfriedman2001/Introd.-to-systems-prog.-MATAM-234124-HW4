#include "Slime.h"

Slime::Slime(): Monster(SLIME_COMBAT_POWER,SLIME_LOOT,SLIME_DAMAGE){}
string Slime::startEvent(Player& player){
    return Monster::startEvent(player);
}
std::string Slime::getName()const {
    return "Slime";
}
std::string Slime::getDescription() const{
    return(getName() + Monster::getDescription());
}