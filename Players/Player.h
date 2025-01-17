
#pragma once

#include <string>

#include "Character.h"
#include "Job.h"

using std::string;

class Player {
private:
    string name;
    Character* charachter;
    Job* job;

public:
    /**
     * Gets the description of the player
     *
     * @return - description of the player
    */
    string getDescription() const;

    /**
     * Gets the name of the player
     *
     * @return - name of the player
    */
    string getName() const;

    /**
     * Gets the current level of the player
     *
     * @return - level of the player
    */
    int getLevel() const;

    /**
     * Gets the of force the player has
     *
     * @return - force points of the player
    */
    int getForce() const;

    /**
     * Gets the amount of health points the player currently has
     *
     * @return - health points of the player
    */
    int getHealthPoints() const;

    /**
     * Gets the amount of coins the player has
     *
     * @return - coins of the player
    */
    int getCoins() const;

    virtual void payCoins(int ammount);

    virtual void takeDamage(int ammount);

    virtual void recieveCoins(int ammount);

    virtual void heal(int ammount);

    virtual inline bool isKOd() const;

    virtual unsigned int getCombatPower() const;

    virtual inline bool isFullHealth() const;

    virtual inline bool canPurchase(int price) const;

    Job* getJob(){
        return this->job;
    }

    Job* getJob() const {
        return this->job;
    }
    
};
