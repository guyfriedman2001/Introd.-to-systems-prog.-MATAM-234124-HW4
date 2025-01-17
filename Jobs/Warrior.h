//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef WARRIOR_H
#define WARRIOR_H
#include "Strong.h"


class Warrior : public Strong {
public:
    virtual ~Warrior() = default;
    Warrior() : Strong() {
        this->MAX_HEALTH = 150;
    }
    unsigned int getCombatPower() const override {
        return (this->getForce()*2) + this->getLevel();
    }
};



#endif //WARRIOR_H
