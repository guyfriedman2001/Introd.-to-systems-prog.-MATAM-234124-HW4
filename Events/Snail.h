#pragma once
#include "Monster.h"

class Snail : public Monster{
    public:
    Snail();
    string startEvent(Player& player) override;
    string getName() const override;
    string getDescription() const override;
};