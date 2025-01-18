#pragma once
#include "Monster.h"

Monster::Monster(unsigned int CombatPower, unsigned int Loot, unsigned int Damage): CombatPower(CombatPower), Loot(Loot), Damage(Damage){}
void Monster::startEvent(Player& player){
    if(CombatPower < player.getCombatPower()){ 
        player.recieveCoins(Loot);
        player.levelUp(1);

    }
    else{
        player.takeDamage(Damage);
    }
}
void Monster::setCombatPower(unsigned int addCombatPower){
    this->CombatPower += addCombatPower;
}
void Monster::setLoot(unsigned int addLoot){
    this->Loot += addLoot;
}
void Monster::setDamage(unsigned int addDamage){
    this->Damage += addDamage;
}

unsigned int Monster::getCombatPower() const{
    return this->CombatPower;
}
unsigned int Monster::getLoot()const {
    return this->Loot;
}
unsigned int Monster::getDamage()const {
    return this->Damage;
}

string Monster::getDescription() const{
    return(" (power " + std::to_string(this->getCombatPower()) + ", loot " + std::to_string(this->getLoot()) + ", damage "+ std::to_string(this->getDamage()) + ")");
}