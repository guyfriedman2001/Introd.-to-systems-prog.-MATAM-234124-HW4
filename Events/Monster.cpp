#include "Monster.h"

Monster::Monster(int CombatPower, int Loot, int Damage): CombatPower(CombatPower), Loot(Loot), Damage(Damage){}
std::string Monster::startEvent(Player& player){
    if(CombatPower < player.getCombatPower()){ 
        player.winFight(Loot);
        return getEncounterWonMessage(player, Loot);
    }
    else{
        player.loseFight(Damage);
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
int Monster::getSize(){
    return 1;
}