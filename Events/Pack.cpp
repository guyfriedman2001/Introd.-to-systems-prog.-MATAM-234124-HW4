#include "Pack.h"
#include "EventFactory.h"

Pack::Pack(vector<string>::iterator& monstersString): Monster(0,0,0){
    
    try{
        long unsigned int tempsize = 0;
        monstersString++;
        tempsize = std::stoi(monstersString[0]);
        if(tempsize < 2){
            throw std::runtime_error("Invalid Events File");
        }
        std::vector<std::shared_ptr<Event>> tempMonsters;
        monstersString++;

        for(long unsigned int i = 0; i< tempsize; i++){
            tempMonsters.push_back(EventFactory::create(monstersString));
            monstersString++;

        }
        monstersString-- ;
        
        if(tempsize > tempMonsters.size()){
            throw std::runtime_error("Invalid Events File");
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
    catch(...){
        throw std::runtime_error("Invalid Events File");
    }
    
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
    return(getName() + " of " + std::to_string(monsters.size()) + " members"+ Monster::getDescription());
}

Pack::~Pack(){}