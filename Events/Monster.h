#include "Encounter.h"
#ifndef MONSTER_H
#define MONSTER_H

/**
 * @brief Represents a monster, which is a type of encounter.
 *
 * Provides functionality to manage combat power, loot, and damage for a monster.
 */
class Monster : public Encounter{
<<<<<<< HEAD

private:

    int CombatPower; /**< The combat power of the monster. */
    int Loot;        /**< The loot dropped by the monster. */
    int Damage;      /**< The damage dealt by the monster. */

protected:
public:
    void setCombatPower(int addCombatPower);
=======
    private:
    int CombatPower;
    int Loot;
    int Damage;
    protected:
>>>>>>> cb4eca27eaa8d8182737c6dd00a2d0fc46d02379
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