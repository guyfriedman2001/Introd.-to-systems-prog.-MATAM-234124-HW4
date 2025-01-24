#include "Monster.h"
#ifndef BALROG_H
#define BALROG_H

/**
 * @brief Represents the Balrog monster, a subclass of Monster.
 */
class Balrog : public Monster{
public:

    /**
     * @brief Default constructor for the Balrog class.
     */
    Balrog();

    /**
     * @brief Initiates the Balrog event for a player.
     *
     * @param player A reference to the player involved in the event.
     * @return A string describing the outcome of the event.
     */
    string startEvent(Player& player) override;

    /**
     * @brief Retrieves the name of the Balrog.
     *
     * @return A string representing the name of the Balrog.
     */
    std::string getName() const override;

    /**
     * @brief Retrieves the description of the Balrog.
     *
     * @return A string providing details about the Balrog.
     */
    std::string getDescription() const override;
};
#endif //BALROG_H