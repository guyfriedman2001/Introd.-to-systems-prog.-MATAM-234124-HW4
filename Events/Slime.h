#include "Monster.h"
#ifndef SLIME_H
#define SLIME_H

/**
 * @brief Represents a slime, which is a type of Monster.
 *
 * A basic monster with simple attributes and behavior.
 */
class Slime : public Monster{
public:

    /**
     * @brief Constructs a Slime object.
     */
    Slime();

    /**
     * @brief Executes the encounter event with a player.
     *
     * @param player The player interacting with the slime.
     * @return A string describing the outcome of the event.
     */
    string startEvent(Player& player) override;


    /**
     * @brief Retrieves the name of the slime.
     *
     * @return A string representing the slime's name.
     */
    std::string getName() const override;

    /**
     * @brief Retrieves a description of the slime.
     *
     * @return A string describing the slime.
     */
    std::string getDescription() const override;
};
#endif //SLIME_H