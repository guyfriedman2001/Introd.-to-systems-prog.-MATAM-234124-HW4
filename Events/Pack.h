#pragma once
#include "Monster.h"
#include <map>
using std::map;

class Pack : public Monster{
    private:
    vector<Monster*> monsters;
    //vector<Pack*> packs;
    public:
    Pack(vector<std::string> monstersString);
    void startEvent(Player* player) override;
    std::string getName() override;
    std::string getDescription() override;
    void setNewCombatPower();
};