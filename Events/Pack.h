#pragma once
#include "Monster.h"

class Pack : public Monster{
    private:
    vector<Monster*> monsters;
    //vector<Pack*> packs;
    public:
    Pack(vector<string> monstersString);
    string startEvent(Player& player) override;
    string getName() const override;
    string getDescription()const override;
    void setNewCombatPower();
    ~Pack();
};