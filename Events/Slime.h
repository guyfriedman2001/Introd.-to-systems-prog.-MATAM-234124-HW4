#pragma once
#include "Monster.h"

class Slime : public Monster{
    public:
    Slime();
    void startEvent(Player* player) override;
    std::string getName() override;
    std::string getDescription() override;
};