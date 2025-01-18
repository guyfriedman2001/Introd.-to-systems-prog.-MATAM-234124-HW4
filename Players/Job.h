//
// Created by Guy Friedman on 16/01/2025.
//

#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a<b)?a:b

#define MAXLEVEL (10)
#include "../Events/AllEvents.h"
using std::string;


#ifndef JOB_H
#define JOB_H

constexpr int MaxRetries = 5;

class Job {
protected:
    unsigned int level;
    unsigned int force;
    unsigned int currentHealth;
    unsigned int MAX_HEALTH;
    unsigned int coins;

public:
    virtual ~Job() = default;
    Job() : level(1), force(5), currentHealth(100), MAX_HEALTH(100), coins(10) {}

    virtual void payCoins(unsigned int ammount) {
        if (this->coins < ammount){
            throw new std::runtime_error("cannot have negative coins");
        }
        this->coins -= ammount;
    }
    
    virtual int getMaxHealth(){
        return this->MAX_HEALTH;
    }

    virtual void takeDamage(unsigned int ammount) {
        this->currentHealth -= ammount;
        this->currentHealth = MAX(0,this->currentHealth);
    }

    virtual void recieveCoins(unsigned int ammount) {
        this->coins += ammount;
    }

    virtual void heal(unsigned int ammount) {
        this->currentHealth += ammount;
        this->currentHealth = MIN(this->currentHealth,this->MAX_HEALTH);
    }

    virtual inline bool isKOd() const{
        return this->currentHealth <= 0;
    }

    virtual void getBuffed(unsigned int ammount){
        this->force += ammount;
    }

    virtual void getNerfed(unsigned int ammount){
        this->force -= ammount;
        this->force = MAX(0,this->force);
    }

    virtual unsigned int getCombatPower() const {
        return this->getLevel() + this->getForce();
    }

    virtual inline bool isFullHealth() const {
        return currentHealth == MAX_HEALTH;
    }

    virtual inline bool canPurchase(unsigned int price) const {
        return this->coins >= price;
    }

    virtual string getClassName() const {
        return "Job";
    }

    virtual void setPlayer(Player* player){}
        
    /**
     * Gets the description of the player
     *
     * @return - description of the player
    */
    virtual string getDescription() const;



    /**
     * Gets the current level of the player
     *
     * @return - level of the player
    */
    virtual int getLevel() const {
        return this->level;
    }

    /**
     * Gets the of force the player has
     *
     * @return - force points of the player
    */
    virtual int getForce() const {
        return this->force;
    }

    /**
     * Gets the amount of health points the player currently has
     *
     * @return - health points of the player
    */
    virtual int getHealthPoints() const{
        return this->currentHealth;
    }

    /**
     * Gets the amount of coins the player has
     *
     * @return - coins of the player
    */
    virtual int getCoins() const {
        return this->coins;
    }

    virtual void fight(Monster* monster){
        //fixme todo
    }

    virtual void levelUp(){
        ++(this->level);
        this->level = MIN(this->level, MAXLEVEL);
    }

};



#endif //JOB_H
