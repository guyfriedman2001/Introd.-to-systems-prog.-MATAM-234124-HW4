//
// Created by Guy Friedman on 16/01/2025.
//

#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a<b)?a:b

#define MAXLEVEL (10)
//#include "../Events/AllEvents.h"

#include <iostream>
using std::string;
#include "Job.h"

constexpr int MaxRetries = 5;


class Job {
protected:
    int level;
    int force;
    int currentHealth;
    int MAX_HEALTH;
    int coins;

public:
    virtual Job::~Job() = default;
    Job::Job() : level(1), force(5), currentHealth(100), MAX_HEALTH(100), coins(10) {}

    virtual void Job::payCoins(int ammount) {
        if (this->coins < ammount){
            throw std::runtime_error("cannot have negative coins");
        }
        this->coins -= ammount;
    }
    
    virtual int Job::getMaxHealth(){
        return this->MAX_HEALTH;
    }

    virtual void Job::takeDamage(int ammount) {
        this->currentHealth = MAX(0,this->currentHealth - ammount);
    }

    virtual void Job::recieveCoins(int ammount) {
        this->coins += ammount;
    }

    virtual void Job::heal(int ammount) {
        this->currentHealth += ammount;
        this->currentHealth = MIN(this->currentHealth,this->MAX_HEALTH);
    }

    bool Job::isKOd() const{
        return this->currentHealth <= 0;
    }

    virtual void Job::getBuffed(int ammount){
        this->force += ammount;
    }

    virtual void Job::getNerfed(int ammount){
        this->force = MAX(0,this->force - ammount);
    }

    virtual int Job::getCombatPower() const {
        return this->getLevel() + this->getForce();
    }

    virtual inline bool Job::isFullHealth() const {
        return currentHealth == MAX_HEALTH;
    }

    virtual inline bool Job::canPurchase(int price) const {
        return this->coins >= price;
    }

    virtual string Job::getClassName() const {
        return "Job";
    }

    virtual string Job::getDescription() const{
        return "fix job des";
    }

    int Job::getLevel() const {
        return this->level;
    }

    virtual int Job::getForce() const {
        return this->force;
    }

    virtual int Job::getHealthPoints() const{
        return this->currentHealth;
    }

    virtual int Job::getCoins() const {
        return this->coins;
    }

    virtual void Job::levelUp(){
        this->level = MIN(1 + this->level, MAXLEVEL);
    }

    virtual string Job::getJobType() = 0;
};




