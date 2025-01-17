#pragma once;

#include "Players/Player.h"
#include "Adapters/PlayerAdapter.h"

class MatamPlayer : public PlayerAdapter{


    /**
     * Ori - if you want me to add a functionality to player,
     * write the declaration of the function, and inside the fubction write a
     * comment describing what you want me to do, and ill add the necessary
     * calls to player
     * 
     * (if you want, you can also add the calls, but if you dont feel like it just do 
     * what i wrote above)
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