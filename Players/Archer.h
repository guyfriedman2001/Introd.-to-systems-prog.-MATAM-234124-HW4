//
// Created by Guy Friedman on 16/01/2025.
//
#include "Fast.h"
#ifndef ARCHER_H
#define ARCHER_H

class Archer : public Fast {
public:
    virtual ~Archer() = default;
    Archer() : Fast() {
        this->coins = 20;
    }
};



#endif //ARCHER_H
