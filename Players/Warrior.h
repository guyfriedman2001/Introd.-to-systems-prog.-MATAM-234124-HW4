//
// Created by Guy Friedman on 16/01/2025.
//
#include "Strong.h"
#ifndef WARRIOR_H
#define WARRIOR_H


/**
 * @brief Represents the Warrior job class, inheriting from the Strong base class.
 */
class Warrior : public Strong {

public:

    /**
     * @brief Destructor for the Warrior class.
     */
    virtual ~Warrior() = default;

    /**
     * @brief Default constructor for the Warrior class.
     */
    Warrior() : Strong() {
        this->MAX_HEALTH = 150;
        this->currentHealth = 150;
    }

    /**
     * @brief Calculates the Warrior's combat power.
     * 
     * @return The combat power, calculated as 2 times the force plus the level of the Warrior.
     */
    int getCombatPower() const override {
        return ((this->getForce()*2) + this->getLevel());
    }
    virtual string getDescription() const override;

};



#endif //WARRIOR_H
