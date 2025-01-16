#pragma once
#include "Monster.h"

Monster::Monster(unsigned int CombatPower, unsigned int Loot, unsigned int Damage): CombatPower(CombatPower), Loot(Loot), Damage(Damage){}
void Monster::startEvent(Player* player){
    if(CombatPower < player->getCombatPower()){ //TODO getCombatPower() func in player (protected?)
        player->win(Loot); //TODO win( unsigned int Loot)  func in player (protected?) + levelUp
    }
    else{
        player->lose(Damage); //TODO lose(unsigned int Damage)  func in player (protected?)
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

unsigned int Monster::getCombatPower(){
    return this->CombatPower;
}
unsigned int Monster::getLoot(){
    return this->Loot;
}
unsigned int Monster::getDamage(){
    return this->Damage;
}