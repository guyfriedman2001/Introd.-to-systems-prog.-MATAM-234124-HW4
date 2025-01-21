//#pragma once
//#include "../Players/Player.h"
// #include <string>
// #include <vector>
//class Encounter;
#include "Encounter.h"
#ifndef MONSTER_H
#define MONSTER_H
class Monster : public Encounter{
    private:
    int CombatPower;
    int Loot;
    int Damage;
    protected:
    void setCombatPower(int addCombatPower);
    void setLoot(int addLoot);
    void setDamage(int addDamage);
    public:
    Monster(int CombatPower, int Loot, int Damage);
    virtual string startEvent(Player& player) override = 0;
    Monster() = default; //?
    int getCombatPower() const;
    int getLoot()const;
    int getDamage()const;
    virtual string getName() const = 0;
    virtual string getDescription() const override;
    virtual ~Monster();

    virtual void setNewCombatPower();
};
#endif //MONSTER_H