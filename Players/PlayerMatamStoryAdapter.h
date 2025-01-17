#pragma once;

#include "Players/Player.h"
#include "Jobs/Job.h"
#include "Charachters/Character.h"

class PlayerMatamStoryAdapter{


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
    int getMaxHealthPoints(const Player& player){
        Job& job = player.getJob();
        return job.getMaxHealth();
    }

    void win(Player& player, int ammount){
        Job& job = player.getJob();
        job.recieveCoins(ammount);
    }

    void lose(Player& player, int ammount){
        Job& job = player.getJob();
        job.payCoins(ammount);
    }

    void setCoins(Player& player, int ammount){
        Job& job = player.getJob();
        job.payCoins(job.getCoins());
        job.recieveCoins(ammount);
    }

    void forceUp(Player& player, int ammount){
        Job& job = player.getJob();
        job.getBuffed(ammount);
    }

    void ForceDown(Player& player, int ammount){
        Job& job = player.getJob();
        job.getNerfed(ammount);
    }


};