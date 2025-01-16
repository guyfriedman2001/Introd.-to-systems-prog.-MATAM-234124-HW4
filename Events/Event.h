
#pragma once
#include "EventFactory.h"
#include "../Players/Player.h"
#include <iostream>

class Event {
    private:
    EventFactory* event;
public:
    /**
     * Gets the description of the event
     *
     * @return - the description of the event
    */
    virtual string getDescription() const;
    virtual void startEvent(Player* player) = 0;
    Event(EventFactory* event);
    Event() = default;
};
