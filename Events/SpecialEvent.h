#include "Event.h"
#ifndef SPECIALEVENT_H
#define SPECIALEVENT_H

/**
 * @brief Represents a special event, which is a type of Event.
 *
 * Serves as a base class for unique events that interact with a player.
 */
class SpecialEvent :public Event{
public:

    /**
     * @brief Executes the special event with a player.
     *
     * @param player The player experiencing the event.
     * @return A string describing the outcome of the event.
     */
    virtual string startEvent(Player& player) = 0;

    /**
     * @brief Retrieves a description of the special event.
     *
     * @return A string describing the event.
     */
    virtual string getDescription() const = 0;

    /**
     * @brief Default constructor for SpecialEvent.
     */
    SpecialEvent() = default;
};
#endif //SPECIALEVENT_H