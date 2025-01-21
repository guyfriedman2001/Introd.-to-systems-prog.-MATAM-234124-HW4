//#pragma once
#include "Pack.h"
#include "EventFactory.h"
//#include "Monster.h"
Pack::Pack(vector<string> monstersString): Monster(0,0,0){
    int packSize = std::stoi(monstersString[0]);
    if(packSize < 2){
        //throw error!
    }
    monstersString.erase(monstersString.begin());
    for(auto monster : monstersString){
        this->monsters.push_back(std::shared_ptr<Monster>(dynamic_cast<Monster*>(EventFactory::eventFactory(monstersString))));
    }
    // for(auto iter = monstersString.begin(); iter != monstersString.end(); iter++){
    //     this->monsters.push_back(std::shared_ptr<Monster>(dynamic_cast<Monster*>(EventFactory::eventFactory(monstersString))));
    //     //EventFactory newEvent = EventFactory(monstersString);
    //     // monsters.push_back(dynamic_cast<Monster*>(newEvent.create()));
    //     // Monster::setCombatPower(monsters[j]->getCombatPower());
    //     // Monster::setLoot(monsters[j]->getLoot());
    //     // Monster::setDamage(monsters[j]->getDamage());
    //     //monstersString->erase(monstersString->begin());
    // }
    for(auto monster : monsters){
        setCombatPower(monster->getCombatPower());
        setLoot(monster->getLoot());
        setDamage(monster->getDamage());
    }
    // for(auto iter = monsters.begin(); iter != monsters.end(); iter++){
    //     Monster::setCombatPower((*iter)->getCombatPower());
    //     Monster::setLoot((*iter)->getLoot());
    //     Monster::setDamage((*iter)->getDamage());
    // }

    // for(int i = monstersString->size(), int j = 0 ; i > 0; i--, j++){
    //     //  EventFactory newEvent = EventFactory(monstersString);
    //     // if(monstersString[j] == "Pack"){
    //     //     packs.push_back(dynamic_cast<Pack*>(newEvent.create()));
    //     // }
    //     // else{
    //     //     monsters.push_back(dynamic_cast<Monster*>(newEvent.create()));
    //     // }
    //     // Monster::setCombatPower(monsters[j]->getCombatPower());
    //     // Monster::setLoot(monsters[j]->getLoot());
    //     // Monster::setDamage(monsters[j]->getDamage());
    //     // monstersString.erase(monstersString.begin());
    //     EventFactory newEvent = EventFactory(monstersString);
    //     monsters.push_back(dynamic_cast<Monster*>(newEvent.create()));
    //     Monster::setCombatPower(monsters[j]->getCombatPower());
    //     Monster::setLoot(monsters[j]->getLoot());
    //     Monster::setDamage(monsters[j]->getDamage());
    //     monstersString->erase(monstersString->begin());
    // }

    // if(monsters.size() != packSize) error! ?
}

string Pack::startEvent(Player& player){
    string event = Monster::startEvent(player);
    setNewCombatPower();
    return event;
}    
    

void Pack::setNewCombatPower(){
    for(auto monster : monsters){
        if(monster->getName() == "Balrog"){
            setCombatPower(2); 
        }
        if(monster->getName() == "Pack"){
            //int pastCombatPower =  monster->getCombatPower();
            monster->setNewCombatPower();
            //Monster::setCombatPower(monster->getCombatPower() - pastCombatPower);
        }
    }
    // for(auto iter = monsters.begin(); iter != monsters.end(); iter++){
    //     if((*iter)->getName() == "Balrog"){
    //         Monster::setCombatPower(2); 
    //     }
    //     if((*iter)->getName() == "Pack"){
    //         int pastCombatPower =  (*iter)->getCombatPower();
    //         (*iter)->setNewCombatPower();
    //         Monster::setCombatPower((*iter)->getCombatPower() - pastCombatPower);
    //     }
    // }
}


string Pack::getName() const{
    return("Pack");
}

string Pack::getDescription() const{
    return(getName() + " of " + std::to_string(monsters.size()) + " members"+ Monster::getDescription());
}

Pack::~Pack(){
    monsters.clear();
    Monster::~Monster();
}