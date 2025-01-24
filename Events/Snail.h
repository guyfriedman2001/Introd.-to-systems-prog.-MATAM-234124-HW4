#include "Monster.h"
#ifndef SNAIL_H
#define SNAIL_H

/**
 * @brief Represents a snail, which is a type of Monster.
 *
 * A slow-moving monster with unique characteristics.
 */
class Snail : public Monster{
public:

    /**
     * @brief Constructs a Snail object.
     */
    Snail();

    /**
     * @brief Executes the encounter event with a player.
     *
     * @param player The player interacting with the snail.
     * @return A string describing the outcome of the event.
     */
    string startEvent(Player& player) override;

    /**
     * @brief Retrieves the name of the snail.
     *
     * @return A string representing the snail's name.
     */
    string getName() const override;

    /**
     * @brief Retrieves a description of the snail.
     *
     * @return A string describing the snail.
     */
    string getDescription() const override;
};
#endif //SNAIL_H