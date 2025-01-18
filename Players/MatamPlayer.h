#pragma once;

#include "Players/Player.h"
#include "PlayerAdapter.h"

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
    /**
     * this class is an adapter between MatamStory and Player.
     * 
     * all of the relevant documentation exists in the header files of the above mentioned classes,
     * therfor no documentation is requiered nor will be provided here.
     */

    MatamPlayer() = delete;

    MatamPlayer(Player* player) : PlayerAdapter(player){}

    MatamPlayer(const string& name, const string& character, const string& job)
                 : PlayerAdapter(name, character, job) {}

    virtual ~MatamPlayer() = default;

    string getDescription() const {
        return this->player->getDescription();
    }

    string getName() const {
        return this->player->getName();
    }

    int getLevel() const {
        return this->player->getLevel();
    }

    int getForce() const {
        return this->player->getForce();
    }

    int getHealthPoints() const {
        return this->player->getHealthPoints();
    }

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

    string getType() const {
        return this->player->getJobName();
    }

    inline bool isFullHealth() const {
        return this->player->isFullHealth();
    }

    inline bool canPurchase(int price) const {
        return this->player->canPurchase(price);
    }


};