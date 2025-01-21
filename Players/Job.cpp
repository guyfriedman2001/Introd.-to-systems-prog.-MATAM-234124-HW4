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






    Job::~Job() = default;

    Job::Job() : level(1), force(5), currentHealth(100), MAX_HEALTH(100), coins(10) {}

    void Job::payCoins(int ammount) {
        if (this->coins < ammount){
            throw std::runtime_error("cannot have negative coins");
        }
        this->coins -= ammount;
    }
    
    int Job::getMaxHealth(){
        return this->MAX_HEALTH;
    }

    void Job::takeDamage(int ammount) {
        this->currentHealth = MAX(0,this->currentHealth - ammount);
    }

    void Job::recieveCoins(int ammount) {
        this->coins += ammount;
    }

    void Job::heal(int ammount) {
        this->currentHealth = MIN(ammount + this->currentHealth,this->MAX_HEALTH);
    }

    bool Job::isKOd() const{
        return this->currentHealth <= 0;
    }

    void Job::getBuffed(int ammount){
        this->force += ammount;
    }

    void Job::getNerfed(int ammount){
        this->force = MAX(0,this->force - ammount);
    }

    int Job::getCombatPower() const {
        return this->getLevel() + this->getForce();
    }

    inline bool Job::isFullHealth() const {
        return currentHealth == MAX_HEALTH;
    }

    inline bool Job::canPurchase(int price) const {
        return this->coins >= price;
    }

    string Job::getClassName() const {
        return "Job";
    }

    string Job::getDescription() const{
        return "fix job des";
    }

    int Job::getLevel() const {
        return this->level;
    }

    int Job::getForce() const {
        return this->force;
    }

    int Job::getHealthPoints() const{
        return this->currentHealth;
    }

    int Job::getCoins() const {
        return this->coins;
    }

    void Job::levelUp(){
        this->level = MIN(1 + this->level, MAXLEVEL);
    }







