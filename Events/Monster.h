#pragma once
#include "Encounter.h"
class Monster : public Encounter{
    private:
    unsigned int CombatPower;
    unsigned int Loot;
    unsigned int Damage;
    protected:
    void setCombatPower(unsigned int addCombatPower);
    void setLoot(unsigned int addLoot);
    void setDamage(unsigned int addDamage);
    public:
    Monster(unsigned int CombatPower, unsigned int Loot, unsigned int Damage);
    virtual string startEvent(Player& player) = 0;
    Monster() = default; //?
    unsigned int getCombatPower() const;
    unsigned int getLoot()const;
    unsigned int getDamage()const;
    virtual string getName() const = 0;
    virtual string getDescription() const;
};