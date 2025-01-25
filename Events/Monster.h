#include "Encounter.h"
#ifndef MONSTER_H
#define MONSTER_H

/**
 * @brief Represents a monster, which is a type of encounter.
 *
 * Provides functionality to manage combat power, loot, and damage for a monster.
 */
class Monster : public Encounter{

private:

    int CombatPower; /**< The combat power of the monster. */
    int Loot;        /**< The loot dropped by the monster. */
    int Damage;      /**< The damage dealt by the monster. */

protected:
public:

    /**
     * @brief Sets the combat power of the monster.
     *
     * @param addCombatPower The value to adjust the combat power.
     */
    void setCombatPower(int addCombatPower);

    /**
     * @brief Sets the loot value of the monster.
     *
     * @param addLoot The value to adjust the loot.
     */
    void setLoot(int addLoot);

    /**
     * @brief Sets the damage dealt by the monster.
     *
     * @param addDamage The value to adjust the damage.
     */
    void setDamage(int addDamage);

    /**
     * @brief Constructs a Monster object with specified attributes.
     *
     * @param CombatPower Initial combat power.
     * @param Loot Initial loot value.
     * @param Damage Initial damage value.
     */
    Monster(int CombatPower, int Loot, int Damage);

    static const int BALROG_POWER_UP = 2; /**< Power-up multiplier for specific monsters. */

    public:

    /**
     * @brief Executes the encounter event with a player.
     *
     * @param player The player interacting with the monster.
     * @return A string describing the outcome of the event.
     */
    virtual string startEvent(Player& player) override = 0;

    /**
     * @brief Default constructor for Monster.
     */
    Monster() = default;

    /**
     * @brief Retrieves the combat power of the monster.
     *
     * @return The combat power value.
     */
    int getCombatPower() const;

    /**
     * @brief Retrieves the loot value of the monster.
     *
     * @return The loot value.
     */
    int getLoot()const;

    /**
     * @brief Retrieves the damage dealt by the monster.
     *
     * @return The damage value.
     */
    int getDamage()const;

    /**
     * @brief Retrieves the name of the monster.
     *
     * @return A string representing the monster's name.
     */
    virtual string getName() const = 0;

    /**
     * @brief Retrieves a description of the monster.
     *
     * @return A string describing the monster.
     */
    virtual string getDescription() const override;

    /**
     * @brief Retrieves the size of the monster.
     *
     * @return An integer representing the size.
     */
    virtual int getSize();

    /**
     * @brief Destructor for Monster.
     */
    virtual ~Monster() = default;

    /**
     * @brief Sets a new combat power for the monster.
     */
    virtual void setNewCombatPower();
};
#endif //MONSTER_H