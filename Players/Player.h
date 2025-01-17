
#pragma once

#include <string>

#include "Character.h"
#include "Job.h"
#include "Events/Monster.h"

using std::string;

class Player {
private:
friend class PlayerMaker;
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

    int getMaxHealth(){
        return this->job->getMaxHealth();
    }

    void recieveCoins(int ammount){
        this->job->recieveCoins(ammount);
    }

    void payCoins(int ammount){
        this->job->payCoins(ammount);
    }

    int getCoins(){
        return this->job->getCoins();
    }

    void getBuffed(int ammount){
        this->job->getBuffed(ammount);
    }

    void getNerfed(int ammount){
        this->job->getNerfed(ammount);
    }

    void fight(Monster* monster){
        this->job->fight(monster);
    }

    string getJobName(){
        return this->job->getClassName();
    }
    
};
