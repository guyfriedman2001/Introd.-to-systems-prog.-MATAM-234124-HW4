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

    /**
     * Gets the description of the player
     *
     * @return - description of the player
    */
    string getDescription() const {
        return this->player->getDescription();
    }

    /**
     * Gets the name of the player
     *
     * @return - name of the player
    */
    string getName() const {
        return this->player->getName();
    }

    /**
     * Gets the current level of the player
     *
     * @return - level of the player
    */
    int getLevel() const {
        return this->player->getLevel();
    }

    /**
     * Gets the of force the player has
     *
     * @return - force points of the player
    */
    int getForce() const {
        return this->player->getForce();
    }

    /**
     * Gets the amount of health points the player currently has
     *
     * @return - health points of the player
    */
    int getHealthPoints() const {
        return this->player->getHealthPoints();
    }

    /**
     * Gets the amount of coins the player has
     *
     * @return - coins of the player
    */
    int getCoins() const {
        return this->player->getCoins();
    }

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

    void encounter(Monster* monster){
        this->player->fight(monster);
    }

    string getType(){
        return this->player->getJobName();
    }


};