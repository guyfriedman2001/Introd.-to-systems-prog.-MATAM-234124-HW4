
#pragma once
#include "EventFactory.h"
#include "../Players/Player.h"
#include <iostream>
#include "../Utilities.h"
using std::string;

class Event {
    private:
    EventFactory* event;
public:
    /**
     * Gets the description of the event
     *
     * @return - the description of the event
    */
    virtual string getDescription() const = 0;
    virtual string startEvent(Player& player) = 0;
    Event(EventFactory* event);
    Event() = default;
};
