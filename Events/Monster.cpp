//#pragma once
#include "Monster.h"
//#include "../Utilities.h"

Monster::Monster(int CombatPower, int Loot, int Damage): CombatPower(CombatPower), Loot(Loot), Damage(Damage){}
std::string Monster::startEvent(Player& player){
    if(CombatPower < player.getCombatPower()){ 
        player.recieveCoins(Loot);
        player.levelUp();
        if(player.getJobType() == "Strong"){
            player.takeDamage(10);
        }
        return getEncounterWonMessage(player, Loot);

    }
    else{
        player.takeDamage(Damage);
        return getEncounterLostMessage(player, Damage);
    }
}
void Monster::setCombatPower(int addCombatPower){
    this->CombatPower = addCombatPower;
}
void Monster::setLoot(int addLoot){
    this->Loot = addLoot;
}
void Monster::setDamage(int addDamage){
    this->Damage = addDamage;
}

int Monster::getCombatPower() const{
    return this->CombatPower;
}
int Monster::getLoot()const {
    return this->Loot;
}
int Monster::getDamage()const {
    return this->Damage;
}

string Monster::getDescription() const{
    return(" (power " + std::to_string(this->getCombatPower()) + ", loot " + std::to_string(this->getLoot()) + ", damage "+ std::to_string(this->getDamage()) + ")");
}

void Monster::setNewCombatPower(){}

Monster::~Monster(){
    Encounter::~Encounter();
}