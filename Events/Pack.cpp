#pragma once
#include "Pack.h"

Pack::Pack(vector<std::string> monstersString): Monster(0,0,0){
    int packSize = std::stoi(monstersString[0]);
    if(packSize < 2){
        //throw error!
    }
    monstersString.erase(monstersString.begin());
    for(int i = monstersString.size(), int j = 0 ; i > 0; i--, j++){
        EventFactory newEvent = EventFactory(monstersString);
        monsters.push_back(dynamic_cast<Monster*>(newEvent.create()));
        Monster::setCombatPower(monsters[j]->getCombatPower());
        Monster::setLoot(monsters[j]->getLoot());
        Monster::setDamage(monsters[j]->getDamage());
        monstersString.erase(monstersString.begin());
    }
    // if(monsters.size() != packSize) error! ?
}
void Pack::startEvent(Player* player){
    Monster::startEvent(player);
}

std::string Pack::getName() const{
    int size = monsters.size();
    return ("Pack of " + std::to_string(size) + " members");
}