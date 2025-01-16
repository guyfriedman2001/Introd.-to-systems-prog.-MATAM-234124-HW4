#pragma once
#include "Monster.h"

class Pack : public Monster{
    private:
    vector<Monster*> monsters;
    public:
    Pack(vector<std::string> monstersString);
    void startEvent(Player* player) override;
};