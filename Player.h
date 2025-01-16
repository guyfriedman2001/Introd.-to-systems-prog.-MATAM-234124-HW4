//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>

#include "Character.h"
#include "Job.h"

using std::string;

class Player {
private:
    string name;
    Character charachter;
    Job job;

public:
    Character getCharachter() {
        return this->charachter;
    }
    Job getJob() {
        return this->job;
    }
    string getName() {}
    unsigned int getLevel() {}
    unsigned int getForce() {}
    unsigned int getHealthPoints() {}
    unsigned int getCoins() {}
    unsigned int getDescription() {}

    unsigned int getCombatPower() {
        return this->job.getCombatPower();
    }

};



#endif //PLAYER_H
