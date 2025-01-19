//#pragma once

//class Monster;
#include "Monster.h"
#ifndef PACK_H
#define PACK_H
class Pack : public Monster{
    private:
    vector<Monster*> monsters;
    //vector<Pack*> packs;
    public:
    Pack(vector<string>* monstersString);
    string startEvent(Player& player) override;
    string getName() const override;
    string getDescription()const override;
    void setNewCombatPower();
    ~Pack();
};
#endif //PACK_H