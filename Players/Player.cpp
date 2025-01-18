//
// Created by Guy Friedman on 16/01/2025.
//

#include "Player.h"
using std::string;

class Player {
private:
    string name;
    Character* character;
    Job* job;

public:


Player::Player(const string& name, Character* character, Job* job){
    this->name = string(name);
    this->setCharacter(character);
        this->setJob(job);
}

void Player::setCharacter(Character* character){
    this->character = character;
    character->setPlayer(this);
}

void Player::setJob(Job* job){
    this->job = job;
    job->setPlayer(this);
}

    Player::Player() = default;

    virtual Player::~Player(){
        delete this->character;
        delete this->job;
    }

    bool Player::isFullHealth() {
        return this->job->isFullHealth();
    }

    Character* Player::getCharacter() {
        return this->character;
    }

    Job* Player::getJob() {
        return this->job;
    }
    string getName() {

    }

    unsigned int Player::getCombatPower() const {
        return this->job->getCombatPower();
    }

    void Player::payCoins(int ammount) {
        this->job->payCoins(ammount);
    }

    void Player::takeDamage(int ammount) {
        this->job->takeDamage(ammount);
    }

    void Player::recieveCoins(int ammount) {
        this->job->recieveCoins(ammount);
    }

    void Player::heal(int ammount) {
        this->job->heal(ammount);
    }

    inline bool Player::isKOd() const {
        return this->job->isKOd();
    }

    unsigned int Player::getCombatPower() const {
        return this->job->getCombatPower();
    }

    inline bool Player::isFullHealth() const {
        return this->job->isFullHealth();
    }

    inline bool Player::canPurchase(int price) const {
        return this->job->canPurchase(price);
    }

    string Player::getDescription() const {

    }

    string Player::getName() const {

    }

    int Player::getLevel() const {

    }

    int Player::getForce() const {

    }

    int Player::getHealthPoints() const {

    }

    int Player::getCoins() const {

    }

string Player::getDescription() const;

string Player::getName() const;

int Player::getLevel() const;

int Player::getForce() const;

int Player::getHealthPoints() const;

int Player::getCoins() const;

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

virtual string Player::getCharacterName(){
    return this->character->getClassName();
}

};