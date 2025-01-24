#include "Encounter.h"
#ifndef MONSTER_H
#define MONSTER_H
class Monster : public Encounter{
    private:
    int CombatPower;
    int Loot;
    int Damage;
    protected:
    void setLoot(int addLoot);
    void setDamage(int addDamage);
    Monster(int CombatPower, int Loot, int Damage);
    static const int BALROG_POWER_UP = 2;
    static const int STRONG_DAMAGE = 10;
    public:
    void setCombatPower(int addCombatPower);
    virtual string startEvent(Player& player) override = 0;
    Monster() = default; //?
    int getCombatPower() const;
    int getLoot()const;
    int getDamage()const;
    virtual string getName() const = 0;
    virtual string getDescription() const override;
    virtual int getSize();
    virtual ~Monster() = default;

    virtual void setNewCombatPower();
};
#endif //MONSTER_H