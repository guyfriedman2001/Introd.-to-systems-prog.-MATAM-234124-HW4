#pragma once
#include "Monster.h"

class Slime : public Monster{
    public:
    Slime();
    string startEvent(Player& player) override;
    std::string getName() const override;
    std::string getDescription() const override;
};