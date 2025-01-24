#include "Warrior.h"
string Warrior::getDescription() const{
    return "Warrior";
}

Warrior::Warrior() : Strong() {
    this->MAX_HEALTH = 150;
    this->currentHealth = 150;
}

int Warrior::getCombatPower() const {
    return ((this->getForce()*2) + this->getLevel());
}