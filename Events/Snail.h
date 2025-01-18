#pragma once
#include "Monster.h"

class Snail : public Monster{
    public:
    Snail();
    string startEvent(Player& player) override;
    std::string getName() const override;
    std::string getDescription() const override;
};