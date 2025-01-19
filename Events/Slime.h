//#pragma once

//class Monster;
#include "Monster.h"
#ifndef SLIME_H
#define SLIME_H
class Slime : public Monster{
    public:
    Slime();
    string startEvent(Player& player) override;
    std::string getName() const override;
    std::string getDescription() const override;
};
#endif //SLIME_H