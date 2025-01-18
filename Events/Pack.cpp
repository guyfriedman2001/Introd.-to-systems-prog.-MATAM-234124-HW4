#pragma once
#include "Pack.h"

Pack::Pack(vector<std::string> monstersString): Monster(0,0,0){
    int packSize = std::stoi(monstersString[0]);
    if(packSize < 2){
        //throw error!
    }
    monstersString.erase(monstersString.begin());
    for(int i = monstersString.size(), int j = 0 ; i > 0; i--, j++){
        //  EventFactory newEvent = EventFactory(monstersString);
        // if(monstersString[j] == "Pack"){
        //     packs.push_back(dynamic_cast<Pack*>(newEvent.create()));
        // }
        // else{
        //     monsters.push_back(dynamic_cast<Monster*>(newEvent.create()));
        // }
        // Monster::setCombatPower(monsters[j]->getCombatPower());
        // Monster::setLoot(monsters[j]->getLoot());
        // Monster::setDamage(monsters[j]->getDamage());
        // monstersString.erase(monstersString.begin());
        EventFactory newEvent = EventFactory(monstersString);
        monsters.push_back(dynamic_cast<Monster*>(newEvent.create()));
        Monster::setCombatPower(monsters[j]->getCombatPower());
        Monster::setLoot(monsters[j]->getLoot());
        Monster::setDamage(monsters[j]->getDamage());
        monstersString.erase(monstersString.begin());
    }

    // if(monsters.size() != packSize) error! ?
}
void Pack::startEvent(Player& player){
    Monster::startEvent(player);
    setNewCombatPower();
}

void Pack::setNewCombatPower(){
    for(auto iter = monsters.begin(); iter != monsters.end(); iter++){
        if((*iter)->getName() == "Balrog"){
            Monster::setCombatPower(2); 
        }
        if((*iter)->getName() == "Pack"){
            int pastCombatPower =  (*iter)->getCombatPower();
            dynamic_cast<Pack*>(*iter)->setNewCombatPower();
            Monster::setCombatPower((*iter)->getCombatPower() - pastCombatPower);
        }
    }
}


std::string Pack::getName() const{
    return("Pack");
}

std::string Pack::getDescription() const{
    return(getName() + " of " + std::to_string(monsters.size()) + " members"+ Monster::getDescription());
}
