#include "Player.h"

Player::Player(const string& name, Character* character, Job* job){
    this->name = string(name);
    this->setCharacter(character);
    this->setJob(job);
}

void Player::setCharacter(Character* character){
    this->character = character;
}

void Player::setJob(Job *job)
{
    this->job = job;
}

    Player::~Player(){
        delete this->character;
        delete this->job;
    }

    Character* Player::getCharacter() {
        return this->character;
    }

    Job* Player::getJob() {
        return this->job;
    }

Job* Player::getJob() const {
    return this->job;
}

    string Player::getName() const{
        return this->name;

    }

    int Player::getCombatPower() const {
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

    bool Player::isKOd() const {
        return this->job->isKOd();
    }

    bool Player::isFullHealth() const {
        return this->job->isFullHealth();
    }


    bool Player::canPurchase(int price) const {
    return this->job->canPurchase(price);
}

    std::string Player::getDescription() const
    {
        std::string descriptionStart = (this->getName() + ", " + this->job->getDescription() + " with " + this->character->getDescription());
        return (descriptionStart + " character (level " + std::to_string(this->getLevel()) + ", force " +std::to_string(this->getForce()) +")" );
    }


int Player::getLevel() const {
    return this->job->getLevel();
}

int Player::getForce() const {
    return this->job->getForce();
}

int Player::getHealthPoints() const {
    return this->job->getHealthPoints();
}


int Player::getMaxHealth(){
    return this->job->getMaxHealth();
}


int Player::getCoins() const{
    return this->job->getCoins();
}

void Player::getBuffed(int ammount){
    this->job->getBuffed(ammount);
}

void Player::getNerfed(int ammount){
    this->job->getNerfed(ammount);
}

string Player::getJobName(){
    return this->job->getClassName();
}


string Player::getCharacterName(){
    return this->character->getClassName();
}

void Player::levelUp(){
    this->job->levelUp();
}

string Player::getJobType(){
    return this->job->getJobType();
}

void Player::winFight(int loot){
    this->recieveCoins(loot);
    this->levelUp();
    this->job->winFight();
}
 void Player::loseFight(int Damage){
    this->takeDamage(Damage);
 }