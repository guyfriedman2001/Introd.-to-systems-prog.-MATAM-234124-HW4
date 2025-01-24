#include "Pack.h"

Pack::Pack(vector<string>::iterator& monstersString): Monster(0,0,0), packSize(0){
    
    try{
        monstersString++;
        size_t position;

        int tempsize = std::stoi(monstersString[0], &position);
        if(tempsize < 2 || position != monstersString[0].length()){
            throw std::runtime_error("Invalid Events File");
        }
        std::vector<std::shared_ptr<Event>> tempMonsters;

        for(int i = 0; i< tempsize; i++){
            monstersString++;
            tempMonsters.push_back(EventFactory::create(monstersString));
        }
        
        for(auto monster = tempMonsters.begin() ; monster < (tempMonsters.begin() + tempsize) ; monster++){
            auto monsterptr = std::dynamic_pointer_cast<Monster>(*monster);
            if(monsterptr != nullptr){
                this->monsters.push_back(monsterptr);
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
            monster->setCombatPower(monster->getCombatPower() + 2); 
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

