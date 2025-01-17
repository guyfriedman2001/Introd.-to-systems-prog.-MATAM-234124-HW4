#pragma once;

#include "Players/Player.h"
#include "Jobs/Job.h"
#include "Charachters/Character.h"
#include "Adapters/PlayerAdapter.h"

class MatamPlayer : public PlayerAdapter{


    /**
     getMaxHealthPoints()
    make sure that paycoins doesn't get below zero. throw runtime_error if it does.
    make sure heal doesn't get over MaxHealthPoints
    forceUp(unsigned int effect )
    forceDown(unsigned int effect)


    win( unsigned int Loot)
    lose(unsigned int Damage)
    getMaxHealthPoints()
    setCoins(int coins) +throw Error if coins below 0
    setHealthPoints(int healthPoints) + make sure its not over maxHP
    getJobType() - i saw you did getJob but i dont know how to use in. maybe it should be *Job?
    forceUp(unsigned int effect )
    forceDown(unsigned int effect)
     */

public:

    MatamPlayer() = delete;

    MatamPlayer(const string& name, const string& character, const string& job)
                 : PlayerAdapter(name, character, job) {}

    virtual ~MatamPlayer() = default;

    int getMaxHealthPoints(){
        return this->player->getMaxHealth();
    }

    void win(int ammount){
        this->player->recieveCoins(ammount);
    }

    void lose(int ammount){
        this->player->payCoins(ammount);
    }

    void setCoins(int ammount){
        this->player->payCoins(this->player->getCoins());
        this->player->recieveCoins(ammount);
    }

    void forceUp(int ammount){
        this->player->getBuffed(ammount);
    }

    void forceDown(int ammount){
        this->player->getNerfed(ammount);
    }


};