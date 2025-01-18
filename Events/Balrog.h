#pragma once
#include "Monster.h"

class Balrog : public Monster{
    public:
    Balrog();
    string startEvent(Player& player) override;
    std::string getName() const override;
    std::string getDescription() const override;
};