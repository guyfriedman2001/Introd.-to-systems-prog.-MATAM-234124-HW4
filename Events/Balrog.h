//#pragma once
//class Monster;
#include "Monster.h"
#ifndef BALROG_H
#define BALROG_H
class Balrog : public Monster{
    public:
    Balrog();
    string startEvent(Player& player) override;
    std::string getName() const override;
    std::string getDescription() const override;
};
#endif //BALROG_H