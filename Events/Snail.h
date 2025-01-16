#pragma once
#include "Monster.h"

class Snail : public Monster{
    public:
    Snail();
    void startEvent(Player* player) override;
    std::string getName() const override;
};