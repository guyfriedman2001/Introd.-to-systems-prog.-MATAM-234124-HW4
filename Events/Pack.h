#include "Monster.h"

#ifndef PACK_H
#define PACK_H

/**
 * @brief Represents a pack of monsters, which is a type of Monster.
 *
 * Manages a group of monsters and their combined behavior.
 */
class Pack : public Monster{

private:

    static const int MINIMUM_PACK_SIZE = 2; /**< The minimum number of monsters in a pack. */
    std::vector<std::shared_ptr<Monster>> monsters; /**< A collection of monsters in the pack. */
    int packSize; /**< The size of the pack. */

protected:

    /**
     * @brief Updates the combat power of the pack.
     */
    void setNewCombatPower() override;

public:

    /**
     * @brief Constructs a Pack object from a string iterator.
     *
     * @param monstersString An iterator containing the serialized monsters.
     */
    Pack(vector<string>::iterator& monstersString);

    /**
     * @brief Executes the encounter event with a player.
     *
     * @param player The player interacting with the pack.
     * @return A string describing the outcome of the event.
     */
    string startEvent(Player& player) override;

    /**
     * @brief Retrieves the name of the pack.
     *
     * @return A string representing the pack's name.
     */
    string getName() const override;

    /**
     * @brief Retrieves a description of the pack.
     *
     * @return A string describing the pack.
     */
    string getDescription()const override;

    /**
     * @brief Retrieves the size of the pack.
     *
     * @return The number of monsters in the pack.
     */
    int getSize() override;

    /**
     * @brief Default destructor for Pack.
     */
    ~Pack() = default;
};
#endif //PACK_H