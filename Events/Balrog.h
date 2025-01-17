#pragma once
#include "Monster.h"

class Balrog : public Monster{
    public:
    Balrog();
    void startEvent(Player* player) override;
    std::string getName() override;
    std::string getDescription() override;
};