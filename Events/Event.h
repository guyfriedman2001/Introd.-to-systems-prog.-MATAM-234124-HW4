
#pragma once
#ifndef EVENT_H
#define EVENT_H
#include "../Players/Player.h"
#include "../Utilities.h"
#include "EventFactory.h"
using std::string;
using std::vector;
//class EventFactory;

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
    virtual ~Event();
};
#endif //EVENT_H