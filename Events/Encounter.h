#include "Event.h"
#ifndef ENCOUNTER_H
#define ENCOUNTER_H

/**
 * @brief Represents an abstract encounter event in the game.
 * 
 * The Encounter class serves as a base class for specific encounter types.
 * Derived classes must implement the behavior for starting the event
 * and providing a description of the encounter.
 */
class Encounter : public Event{
public:

    /**
     * @brief Pure virtual function to start the encounter event.
     * 
     * @param player A reference to the player participating in the encounter.
     * @return A string describing the outcome of the encounter.
     */
    virtual std::string startEvent(Player& player) = 0;

    /**
     * @brief Pure virtual function to retrieve the description of the encounter.
     * 
     * @return A string providing details about the encounter.
     */
    virtual std::string getDescription() const = 0;

    /**
     * @brief Default constructor for the Encounter class.
     */

    Encounter() = default;

    /**
     * @brief Virtual destructor for the Encounter class.
     */
    virtual ~Encounter() = default;
};
#endif //ENCOUNTER_H