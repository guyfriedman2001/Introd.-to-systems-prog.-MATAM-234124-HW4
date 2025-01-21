//#pragma once
#include "Pack.h"
#include "EventFactory.h"
//#include "Monster.h"
Pack::Pack(vector<string>& monstersString ,int& packSize): Monster(0,0,0){
    //std::cout << packSize << "1inpack ctor" << std::endl;
    std::vector<std::shared_ptr<Event>> tempMonsters;
//std::cout << packSize << "inpack ctoggggggr" << std::endl;
    EventFactory::create(monstersString, &tempMonsters);
    //std::cout << packSize << "inpack ctohhhhr" << std::endl;
    for(auto monster = tempMonsters.begin() ; monster < (tempMonsters.begin() + packSize) ; monster++){
        auto monsterptr = std::dynamic_pointer_cast<Monster>(*monster);
        if(monsterptr){
        this->monsters.push_back(monsterptr);
        //std::cout << monsterptr->getName() << "1inpack ctor" << std::endl;
        }
        else{
            throw std::runtime_error("Invalid Events File");
        } 
    }

    // for(int i = 0; i < packSize ; i++){
    //     for(const auto& monster : tempMonsters){
    //         auto monsterptr = std::dynamic_pointer_cast<Monster>(monster);
    //         if(monsterptr){
    //             this->monsters.push_back(monsterptr);
    //         }
    //         else{
    //             throw std::runtime_error("pack Invalid Events File");
    //         }
    //         //this->monsters.push_back(std::dynamic_pointer_cast<Monster>(monster));
            
    //     }
    // }
    
    packSize = monsters.size();
    //std::cout << packSize << "inpack ctor2" << std::endl;
    // for(auto monster : monstersString){
    //     EventFactory::create(monstersString, monsters);
    // }
    // for(auto iter = monstersString.begin(); iter != monstersString.end(); iter++){
    //     this->monsters.push_back(std::shared_ptr<Monster>(dynamic_cast<Monster*>(EventFactory::eventFactory(monstersString))));
    //     //EventFactory newEvent = EventFactory(monstersString);
    //     // monsters.push_back(dynamic_cast<Monster*>(newEvent.create()));
    //     // Monster::setCombatPower(monsters[j]->getCombatPower());
    //     // Monster::setLoot(monsters[j]->getLoot());
    //     // Monster::setDamage(monsters[j]->getDamage());
    //     //monstersString->erase(monstersString->begin());
    // }
    int totalCombatPower = 0;
    int totalLoot = 0;
    int totalDamage = 0;

    for(const auto& monster : monsters){
        totalCombatPower += monster->getCombatPower();
        totalLoot += monster->getLoot();
        totalDamage += monster->getDamage();
    }
    setCombatPower(totalCombatPower);
    setLoot(totalLoot);
    setDamage(totalDamage);

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
    int totalCombatPower = 0;
    for(auto monster : monsters){
        if(monster->getName() == "Balrog"){ 
            monster->setCombatPower(monster->getCombatPower() + 2); 
        }
        else if(monster->getName() == "Pack"){
            //int pastCombatPower =  monster->getCombatPower();
            monster->setNewCombatPower();
            //Monster::setCombatPower(monster->getCombatPower() - pastCombatPower);
        }
        totalCombatPower += monster->getCombatPower();
    }
    setCombatPower(totalCombatPower); 
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
    //monsters.clear();
    //Monster::~Monster();
}