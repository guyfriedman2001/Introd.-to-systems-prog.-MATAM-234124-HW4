//
// Created by Guy Friedman on 16/01/2025.
//

#include "Player.h"
using std::string;

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
Player::Player(const string& name, Character* character, Job* job){
    this->name = string(name);
    this->setCharacter(character);
        this->setJob(job);
}


string Player::getDescription() const;

string Player::getName() const;

int Player::getLevel() const;

int Player::getForce() const;

int Player::getHealthPoints() const;

int Player::getCoins() const;

virtual void Player::payCoins(int ammount);

virtual void Player::takeDamage(int ammount);

virtual void Player::recieveCoins(int ammount);

virtual void Player::heal(int ammount);

virtual inline bool Player::isKOd() const;

virtual unsigned int Player::getCombatPower() const;

virtual inline bool Player::isFullHealth() const;

virtual inline bool Player::canPurchase(int price) const;

void Player::setCharacter(Character* character){
    this->character = character;
    character->setPlayer(this);
}

void Player::setJob(Job* job){
    this->job = job;
    job->setPlayer(this);
}

Job* Player::getJob(){
    return this->job;
}

Job* Player::getJob() const {
    return this->job;
}

int Player::getMaxHealth(){
    return this->job->getMaxHealth();
}

void Player::recieveCoins(int ammount){
    this->job->recieveCoins(ammount);
}

void Player::payCoins(int ammount){
    this->job->payCoins(ammount);
}

int Player::getCoins(){
    return this->job->getCoins();
}

void Player::getBuffed(int ammount){
    this->job->getBuffed(ammount);
}

void Player::getNerfed(int ammount){
    this->job->getNerfed(ammount);
}

void Player::fight(Monster* monster){
    this->job->fight(monster);
}

string Player::getJobName(){
    return this->job->getClassName();
}

inline bool Player::isFullHealth() const {
    return this->job->isFullHealth();
}

inline bool Player::canPurchase(int price) const {
    return this->job->canPurchase(price);
}