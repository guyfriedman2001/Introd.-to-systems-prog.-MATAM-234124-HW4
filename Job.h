//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef JOB_H
#define JOB_H

constexpr int MaxRetries = 5;

class Job {
private:
    unsigned int level;
    unsigned int force;
    unsigned int currentHealth;
    unsigned int MAX_HEALTH;
    unsigned int coins;

public:
    virtual ~Job() = default;
    Job() : level(0), force(0), currentHealth(0), MAX_HEALTH(0), coins(0) {}

    virtual void deductCoins(int* coins, int ammount) {

    }

    virtual void reduceHealth(int* health, int ammount) {

    }

    virtual int getHealth(int health) {

    }

    virtual int getPower(int power) {

    }

    virtual unsigned int getCombatPower() { //int force, int level, int health
        return 15; //fixme
    }
};



#endif //JOB_H
