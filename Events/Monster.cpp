#pragma once
#include "Monster.h"

Monster::Monster(unsigned int CombatPower, unsigned int Loot, unsigned int Damage): CombatPower(CombatPower), Loot(Loot), Damage(Damage){}
void Monster::startEvent(Player* player){
    if(CombatPower < player->getCombatPower()){ 
        player->recieveCoins(Loot);
        // level up!
    }
    else{
        player->takeDamage(Damage);
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
std::string Monster::getName()const {
    return "Monster";
}

string Monster::getDescription() const{
    std::cout << this->getName() << " (power " << this->getCombatPower() << ", loot " << this->getLoot() << ", damage "<< this->getDamage() << ")" << std::endl;
}