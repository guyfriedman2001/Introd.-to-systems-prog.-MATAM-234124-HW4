#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <stdexcept>
#include <memory>
#include <map>
#include "../Players/Player.h"
using std::string;
using std::vector;
#include "EventFactory.h"

#ifndef EVENT_H
#define EVENT_H

/**
 * @brief Represents a general event in the game.
 *
 * The `Event` class serves as a base class for all types of events in the game. 
 * Derived classes should implement the abstract methods to provide specific 
 * event behaviors and descriptions.
 */
class Event {

public:
    /**
     * @brief Gets the event description.
     * 
     * @return Event description as a string.
     */
    virtual string getDescription() const = 0;

    /**
     * @brief Starts the event for the player.
     * 
     * @param player The player involved in the event.
     * @return Outcome of the event as a string.
     */
    virtual string startEvent(Player& player) = 0;
    Event() = default;
    virtual ~Event() = default;
};
#endif //EVENT_H