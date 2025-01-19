
//#pragma once

#include "../Players/Player.h"
#include <string>
#include <vector>
#include "EventFactory.h"
//#include "AllEvents.h"

using std::string;
using std::vector;
#ifndef EVENT_H
#define EVENT_H
//class Player;
class Event {
    private:
    //EventFactory* eventf;
    //Event* event;
public:
    /**
     * Gets the description of the event
     *
     * @return - the description of the event
    */
    virtual string getDescription() const = 0;
    virtual string startEvent(Player& player) = 0;
    //Event(EventFactory* event);
    //Event* getEvent();
    Event() = default;
    virtual ~Event() = default;
};
#endif //EVENT_H