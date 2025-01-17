//
// Created by Guy Friedman on 16/01/2025.
//

#include "Player.h"


class Player {
private:
    string name;
    Character* charachter;
    Job* job;

public:

    Player() = default;

    //Player()

    virtual ~Player() = default;


    bool isFullHealth() {
        return this->job->isFullHealth();
    }
    Character* getCharachter() {
        return this->charachter;
    }
    Job* getJob() {
        return this->job;
    }
    string getName() {}

    unsigned int getCombatPower() const {
        return this->job->getCombatPower();
    }

    virtual void payCoins(int ammount) {
        this->job->payCoins(ammount);
    }

    virtual void takeDamage(int ammount) {
        this->job->takeDamage(ammount);
    }

    virtual void recieveCoins(int ammount) {
        this->job->recieveCoins(ammount);
    }

    virtual void heal(int ammount) {
        this->job->heal(ammount);
    }

    virtual inline bool isKOd() const {
        return this->job->isKOd();
    }

    virtual unsigned int getCombatPower() const {
        return this->job->getCombatPower();
    }

    virtual inline bool isFullHealth() const {
        return this->job->isFullHealth();
    }

    virtual inline bool canPurchase(int price) const {
        return this->job->canPurchase(price);
    }

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


};