//#pragma once

//class Monster;
#include "Monster.h"
#include <vector>
#include <memory>

#ifndef PACK_H
#define PACK_H
class Pack : public Monster{
    private:
    std::vector<std::shared_ptr<Monster>> monsters;
    //vector<Pack*> packs;
    public:
    Pack(vector<string>& monstersString, int& packSize);
    string startEvent(Player& player) override;
    string getName() const override;
    string getDescription()const override;
    void setNewCombatPower() override;
    ~Pack();
};
#endif //PACK_H