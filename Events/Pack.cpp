#include "Pack.h"

Pack::Pack(vector<string>::iterator& monstersString): Monster(0,0,0), packSize(0){
    
    try{
        monstersString++;
        size_t position;

        int tempsize = std::stoi(monstersString[0], &position);
        if(tempsize < MINIMUM_PACK_SIZE || position != monstersString[0].length()){
            throw std::runtime_error("Invalid Events File");
        }
        for(int i = 0; i< tempsize; i++){
            monstersString++;
            auto event = EventFactory::create(monstersString);
            Monster* monsterptr = dynamic_cast<Monster*>(event.get());
            if(monsterptr != nullptr){
                this->monsters.push_back(std::shared_ptr<Monster>(event, monsterptr));
            }
            else{
                throw std::runtime_error("Invalid Events File");
            } 
        }
    }
    catch(std::exception& e){
        throw std::runtime_error("Invalid Events File");
    }
    int totalCombatPower = 0;
    int totalLoot = 0;
    int totalDamage = 0;

    for(const auto& monster : monsters){
        totalCombatPower += monster->getCombatPower();
        totalLoot += monster->getLoot();
        totalDamage += monster->getDamage();
        this->packSize += monster->getSize();
    }
    setCombatPower(totalCombatPower);
    setLoot(totalLoot);
    setDamage(totalDamage);
}

int Pack::getSize(){
    return this->packSize;
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
            monster->setCombatPower(monster->getCombatPower() + BALROG_POWER_UP); 
        }
        else if(monster->getName() == "Pack"){
            monster->setNewCombatPower();
        }
        totalCombatPower += monster->getCombatPower();
    }
    setCombatPower(totalCombatPower); 
}


string Pack::getName() const{
    return("Pack");
}

string Pack::getDescription() const{
    return(getName() + " of " + std::to_string(this->packSize) + " members"+ Monster::getDescription());
}

