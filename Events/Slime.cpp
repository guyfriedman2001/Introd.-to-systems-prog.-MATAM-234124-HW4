#include "Slime.h"

constexpr int SLIME_COMBAT_POWER = 12;
constexpr int SLIME_LOOT = 5;
constexpr int SLIME_DAMAGE = 25;

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