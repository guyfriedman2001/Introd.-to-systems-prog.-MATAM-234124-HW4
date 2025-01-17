//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef STRONG_H
#define STRONG_H
#include "Job.h"


class Strong : public Job{
public:
    unsigned int getCombatPower() const override {
        return (this->getForce()*2) + this->getLevel();
    }
};



#endif //STRONG_H
